from math import cos, sin

import sfml as sf

def draw_square(width, height, v1, img):
    for x in range(v1.x, v1.x + width):
        img[x, height + v1.y] = sf.Color.RED
        img[x, v1.y] = sf.Color.RED
    for y in range(v1.y, v1.y + height):
        img[v1.x, y] = sf.Color.RED
        img[v1.x + width, y] = sf.Color.RED

def draw_squareb(width, height, v1, img):
    for x in range(v1.x, v1.x + width):
        img[x, height + v1.y] = sf.Color(50, 50, 250)
        img[x, v1.y] = sf.Color(50, 50, 250)
    for y in range(v1.y, v1.y + height):
        img[v1.x, y] = sf.Color(50, 50, 250)
        img[v1.x + width, y] = sf.Color(50, 50, 250)

def racket(img, v2, v5):
    draw_square(15, 150, v2, img)
    draw_squareb(15, 150, v5, img)

def ball(img, v3, R):
    for a in range(0, 360):
        v4 = sf.Vector2(v3.x + R * cos(a), v3.y + R * sin(a))
        img[v4.x, v4.y] = sf.Color.WHITE

def collision(v2, v3, v4, v5):
    if (v3.x <= v2.x + 25 and v3.y >= v2.y and v3.y <= v2.y + 150):
        v4.x = 1
    if (v3.x >= v5.x - 15 and v3.y <= v5.y + 150 and v3.y >= v5.y):
        v4.x = - 1
    if (v3.y <= 20):
        v4.y = 1
    if (v3.y >= 720 - 20):
        v4.y = - 1
    return (v4)
