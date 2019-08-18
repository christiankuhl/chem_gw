#!/usr/bin/env python3

import pygame
import random
import threading
import time

N = 200
LEFT_CONCENTRATION = 190
LEFT_SPEED = 8
RIGHT_SPEED = 2

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
    def __init__(self, concentration, speed, screen, image, left=True):
        self.screen = screen
        self.image = pygame.image.load(image).convert()
        self.concentration = int(concentration)
        self.speed = speed
        self.left = left
        self.molecules = []
        for _ in range(self.concentration):
            self.catch()
    def throw(self, other, nowait=False):
        if self.molecules:
            try:
                molecule = self.molecules.pop(random.randint(0, self.concentration-1))
                other.catch()
            except IndexError:
                pass
            if not nowait:
                time.sleep(N / (5 * self.concentration * self.speed))
            self.concentration = len(self.molecules)
    def catch(self):
        width, height = self.screen.get_size()
        y = random.uniform(40, height)
        if self.left:
            x = random.uniform(0, width/2-40)
        else:
            x = random.uniform(width/2+20, width)
        molecule = (int(x), int(y))
        self.molecules.append(molecule)
        self.concentration = len(self.molecules)
    def blit(self):
        for molecule in self.molecules:
            self.screen.blit(self.image, molecule)

def update(screen, background, left, right, paused):
    screen.blit(background, (0, 0))
    right.blit()
    left.blit()
    if paused:
        pause(screen)
    font = pygame.font.SysFont('Arial', 30)
    left_text = font.render(str(left.concentration), True, (255, 255, 0))
    right_text = font.render(str(right.concentration), True, (255, 255, 0))
    left_speed = font.render(str(left.speed), True, (0, 255, 120))
    right_speed = font.render(str(right.speed), True, (0, 255, 120))
    screen.blit(left_text,(10, 0))
    screen.blit(right_text,(screen.get_size()[0]/2+10, 0))
    screen.blit(left_speed, (screen.get_size()[0]/2-40, 0))
    screen.blit(right_speed, (screen.get_size()[0]-40, 0))

def pause(screen):
    arial = pygame.font.SysFont('Arial', 20)
    arial_bold = pygame.font.SysFont('Arial', 20, bold=True)
    darken=pygame.Surface(screen.get_size())
    darken.fill((0, 0, 0))
    darken.set_alpha(64)
    screen.blit(darken,(0,0))
    left_text = arial_bold.render("← [Q]/[A]", True, (255, 255, 255))
    right_text = arial_bold.render("← [E]/[D]", True, (255, 255, 255))
    left_speed = arial_bold.render("[W]/[S] →", True, (255, 255, 255))
    right_speed = arial_bold.render("[R]/[F] →", True, (255, 255, 255))
    speed_descr = arial.render("Geschwindigkeit", True, (255, 255, 255))
    concentration_descr = arial.render("Anzahl Äpfel", True, (255, 255, 255))
    pause_text = arial.render("[P] zum Starten/Stoppen, [ESC] zum Beenden", True, (255, 255, 255))
    screen.blit(left_text,(65, 10))
    screen.blit(right_text,(screen.get_size()[0]/2+65, 10))
    screen.blit(left_speed, (screen.get_size()[0]/2-135, 10))
    screen.blit(right_speed, (screen.get_size()[0]-130, 10))
    screen.blit(concentration_descr, (10, 40))
    screen.blit(concentration_descr, (screen.get_size()[0]/2+10, 40))
    screen.blit(speed_descr, (screen.get_size()[0]/2-150, 40))
    screen.blit(speed_descr, (screen.get_size()[0]-150, 40))
    screen.blit(pause_text, ((screen.get_size()[0]-pause_text.get_rect().width)/2,
                             (screen.get_size()[1]-pause_text.get_rect().height)/2))

def main():
    pygame.init()
    pygame.font.init()
    screen = pygame.display.set_mode((800, 600))
    pygame.display.set_caption("Chemisches Gleichgewicht")
    pygame.mouse.set_visible(1)
    pygame.key.set_repeat(1, 30)
    clock = pygame.time.Clock()

    running = True
    left = Substance(LEFT_CONCENTRATION, LEFT_SPEED, screen, "apple.gif", left=True)
    right = Substance(N-LEFT_CONCENTRATION, RIGHT_SPEED, screen, "apple.gif", left=False)
    background = pygame.image.load("bg.png").convert()
    left_thread = StoppableThread(instance=left, other=right)
    right_thread = StoppableThread(instance=right, other=left)
    left_thread.start()
    right_thread.start()
    paused = True
    left_thread.pause()
    right_thread.pause()

    while running:
        clock.tick(50)
        update(screen, background, left, right, paused)
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False
                left_thread.stop()
                right_thread.stop()
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_ESCAPE:
                    pygame.event.post(pygame.event.Event(pygame.QUIT))
                elif event.key == pygame.K_p:
                    paused = not paused
                    if paused:
                        left_thread.pause()
                        right_thread.pause()
                    else:
                        left_thread.resume()
                        right_thread.resume()
                    time.sleep(.1)
                elif event.key == pygame.K_r:
                    right.speed += 1
                elif event.key == pygame.K_f:
                    if right.speed > 1:
                        right.speed -= 1
                elif event.key == pygame.K_w:
                    left.speed += 1
                elif event.key == pygame.K_s:
                    if left.speed > 1:
                        left.speed -= 1
                elif event.key in [pygame.K_q, pygame.K_d, pygame.K_a, pygame.K_e]:
                    if event.key in [pygame.K_q, pygame.K_d]:
                        right.throw(left, nowait=True)
                    else:
                        left.throw(right, nowait=True)
                    update(screen, background, left, right, paused)
        pygame.display.update()

if __name__ == "__main__":
    main()
