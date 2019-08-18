import random
import threading
import time
from collections import namedtuple
from constants import *

Molecule = namedtuple("Molecule", "x, y, marked")

class StoppableThread(threading.Thread):
    def __init__(self, instance, other, *args, **kwargs):
        self.instance = instance
        self.other = other
        self.paused = False
        super(StoppableThread, self).__init__(*args, **kwargs)
        self._stop_event = threading.Event()
        self._paused = threading.Condition(threading.Lock())
    def stop(self):
        if self.paused:
            self.resume()
        self._stop_event.set()
    def stopped(self):
        return self._stop_event.is_set()
    def run(self):
         while not self.stopped():
            with self._paused:
                while self.paused:
                    if not self.stopped():
                        self._paused.wait()
                    else:
                        self.paused = False
                self.instance.throw(self.other)
    def pause(self):
        self.paused = True
        self._paused.acquire()
    def resume(self):
        self.paused = False
        self._paused.notify()
        self._paused.release()

class Substance:
    def __init__(self, concentration, speed, screen, image, marked_image, left=True):
        self.screen = screen
        self.image = image
        self.marked_image = marked_image
        self.concentration = int(concentration)
        self.speed = speed
        self.left = left
        self.molecules = []
        for index in range(concentration):
            marked = ((index == concentration - 1) and self.left)
            self.catch(marked)
    def throw(self, other, nowait=False):
        if self.molecules:
            try:
                molecule = self.molecules.pop(random.randint(0, self.concentration-1))
                other.catch(marked=molecule.marked)
            except IndexError:
                pass
            if not nowait:
                time.sleep(C_N_APPLES / (5 * self.concentration * self.speed))
            self.concentration = len(self.molecules)
    def catch(self, marked=False):
        width, height = self.screen.get_size()
        y = int(random.uniform(40, height))
        if self.left:
            x = int(random.uniform(0, width/2-40))
        else:
            x = int(random.uniform(width/2+20, width))
        molecule = Molecule(x, y, marked)
        self.molecules.append(molecule)
        self.concentration = len(self.molecules)
    def blit(self):
        for molecule in self.molecules:
            if not molecule.marked:
                self.screen.blit(self.image, (molecule.x, molecule.y))
            else:
                self.screen.blit(self.marked_image, (molecule.x, molecule.y))
