#!/usr/bin/env python3

import pygame
import time
from constants import *
from gamelogic import *

def update(screen, background, left, right, paused):
    screen.blit(background, (0, 0))
    right.blit()
    left.blit()
    if paused:
        pause(screen)
    font = pygame.font.SysFont(C_FONT, C_FONTSIZE_LARGE)
    left_text = font.render(str(left.concentration), True, C_YELLOW)
    right_text = font.render(str(right.concentration), True, C_YELLOW)
    left_speed = font.render(str(left.speed), True, C_GREEN)
    right_speed = font.render(str(right.speed), True, C_GREEN)
    screen.blit(left_text,(10, 0))
    screen.blit(right_text,(screen.get_size()[0]/2+10, 0))
    screen.blit(left_speed, (screen.get_size()[0]/2-40, 0))
    screen.blit(right_speed, (screen.get_size()[0]-40, 0))

def pause(screen):
    arial = pygame.font.SysFont(C_FONT, C_FONTSIZE)
    arial_bold = pygame.font.SysFont(C_FONT, C_FONTSIZE, bold=True)
    darken = pygame.Surface(screen.get_size())
    darken.fill(C_BLACK)
    darken.set_alpha(64)
    screen.blit(darken,(0,0))
    left_text = arial_bold.render(T_CONCENTRATION_LEFT, True, C_WHITE)
    right_text = arial_bold.render(T_CONCENTRATION_RIGHT, True, C_WHITE)
    left_speed = arial_bold.render(T_SPEED_LEFT, True, C_WHITE)
    right_speed = arial_bold.render(T_SPEED_RIGHT, True, C_WHITE)
    speed_descr = arial.render(T_SPEED, True, C_WHITE)
    concentration_descr = arial.render(T_CONCENTRATION, True, C_WHITE)
    pause_text = arial.render(T_PAUSE, True, C_WHITE)
    screen.blit(left_text, (65, 10))
    screen.blit(right_text,(screen.get_size()[0]/2+65, 10))
    screen.blit(left_speed, (screen.get_size()[0]/2-135, 10))
    screen.blit(right_speed, (screen.get_size()[0]-130, 10))
    screen.blit(concentration_descr, (10, 40))
    screen.blit(concentration_descr, (screen.get_size()[0]/2+10, 40))
    screen.blit(speed_descr, (screen.get_size()[0]/2-150, 40))
    screen.blit(speed_descr, (screen.get_size()[0]-150, 40))
    screen.blit(pause_text, ((screen.get_size()[0]-pause_text.get_rect().width)/2,
                             (screen.get_size()[1]-pause_text.get_rect().height)/2))

def load_images(*filenames):
    resources = []
    for filename in filenames:
        resources.append(pygame.image.load(filename).convert())
    return resources

def init_game():
    pygame.init()
    pygame.font.init()
    screen = pygame.display.set_mode(C_DISPLAYSIZE)
    pygame.display.set_caption(T_CAPTION)
    pygame.mouse.set_visible(1)
    pygame.key.set_repeat(1, 30)
    clock = pygame.time.Clock()

    background, apple, marked_apple = load_images(R_BACKGROUND, R_APPLE, R_MARKED_APPLE)
    background = pygame.transform.scale(background, C_DISPLAYSIZE)
    left = Substance(concentration = C_LEFT_CONCENTRATION,
                     speed =  C_LEFT_SPEED,
                     screen = screen,
                     image = apple,
                     marked_image = marked_apple,
                     left=True)
    right = Substance(concentration = C_N_APPLES - C_LEFT_CONCENTRATION,
                      speed =  C_RIGHT_SPEED,
                      screen = screen,
                      image = apple,
                      marked_image = marked_apple,
                      left=False)
    left_thread = StoppableThread(instance=left, other=right)
    right_thread = StoppableThread(instance=right, other=left)
    left_thread.start()
    right_thread.start()
    left_thread.pause()
    right_thread.pause()
    return screen, background, clock, left, right, left_thread, right_thread

def main():
    screen, background, clock, left, right, left_thread, right_thread = init_game()
    running = True
    paused = True
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

if __name__ == '__main__':
    main()
