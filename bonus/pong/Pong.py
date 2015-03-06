#!
from math import cos, sin

import sfml as sf
import Draw

size_sx = 1240
size_sy = 720
s = 400

w = sf.RenderWindow(sf.VideoMode(size_sx, size_sy), "Pong")
w.clear(sf.Color.BLACK)
w.display()

def main():
    play = True
    img = sf.Image.create(1240, 720, sf.Color.BLACK)
    R = 5
    v2 = sf.Vector2(5, 290)
    v3 = sf.Vector2(500, 355)
    v4 = sf.Vector2(1, 1)
    v5 = sf.Vector2(1220, 290)
    speed = 500
    speed_rack = 1100
    ms = 0
    clock = sf.Clock()
    Draw.racket(img, v2, v5)
    Draw.ball(img, v3, R)
    while (w.is_open):
        if play is True:
            time = clock.restart().seconds
            for event in w.events:
                if type(event) is sf.KeyEvent :
                    if sf.Keyboard.is_key_pressed(sf.Keyboard.ESCAPE):
                        w.close()
                    if sf.Keyboard.is_key_pressed(sf.Keyboard.UP):
                        if (v5.y - int(time * speed_rack) > 10 and v5.y > 0):
                            v5.y = (v5.y - 1) - int(time * speed_rack)
                        elif (v5.y - int(time * 500) > 0 and v5.y > 0):
                            v5.y = (v5.y - 1) - int(time * 500)
                    if sf.Keyboard.is_key_pressed(sf.Keyboard.Z):
                        if ((v2.y - 1) - int(time * speed_rack) > 10 and v2.y > 20):
                            v2.y = (v2.y - 1) - int(time * speed_rack)
                        elif ((v2.y - 1) - int(time * 500) > 5 and v2.y > 5):
                            v2.y = (v2.y - 1) - int(time * 500)
                    if sf.Keyboard.is_key_pressed(sf.Keyboard.DOWN):
                        if (v5.y < 720 - 150 and v5.y + int(time * speed_rack) < 720 - 190):
                            v5.y = (v5.y + 1) + int(time * speed_rack)
                        elif (v5.y < 720 - 150 and v5.y + int(time * 500) < 720 - 155):
                            v5.y = (v5.y + 1) + int(time * 500)
                    if sf.Keyboard.is_key_pressed(sf.Keyboard.S):
                        if (v2.y < 720 - 150 and v2.y + int(time * speed_rack) < 720 - 190):
                            v2.y = (v2.y + 1) + int(time * speed_rack)
                        elif (v2.y < 720 - 150 and v2.y + int(time * 500) < 720 - 155):
                            v2.y = (v2.y + 1) + int(time * 500)
            if (v3.x > size_sx - 15):
                player = 1
                play = False
            if (v3.x < 15):
                player = 2
                play = False
            ms = ms + 1
            v4 = Draw.collision(v2, v3, v4, v5)
            if (v4.x * (time * speed) + v3.x < 1240 - R
                and v4.x * (time * speed) + v3.x > 5
                and v4.y * (time * speed) + v3.y < size_sy
                and v4.y * (time * speed) + v3.y > 0):
                v3.x = v3.x + int(time * speed) * v4.x
                v3.y = v3.y + int(time * speed) * v4.y
                if (int(ms) % 20 == 0):
                    speed = speed + 1
            w.clear()
            del img
            img = sf.Image.create(1240, 720, sf.Color.BLACK)
            Draw.racket(img, v2, v5)
            Draw.ball(img, v3, R)
            texture = sf.Texture.from_image(img)
            sprite = sf.Sprite(texture)
            w.draw(sprite)
            w.display()
        if play is False:
            if (player == 1):
                texture = sf.Texture.from_file("Player_1mess.png")
            elif (player == 2):
                texture = sf.Texture.from_file("Player_2mess.png")
            sprite = sf.Sprite(texture)
            w.draw(sprite)
            w.display()
            if (sf.Keyboard.is_key_pressed(sf.Keyboard.ESCAPE)):
                w.close()
            elif (sf.Keyboard.is_key_pressed(sf.Keyboard.RETURN)):
                del v4
                del v3
                del v2
                del v5
                v2 = sf.Vector2(5, 290)
                v4 = sf.Vector2(-1, -1)
                v3 = sf.Vector2(650, 330)
                v5 = sf.Vector2(1220, 290)
                play = True
main()
