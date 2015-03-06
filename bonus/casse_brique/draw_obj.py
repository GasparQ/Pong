import sfml as sf
import math as ma

def draw_ball(img, pos):
    for alpha in range(0, 360):
        img[pos.x + 25 * ma.cos(alpha), pos.y + 25 * ma.sin(alpha)] = sf.Color.GREEN

def draw_raquet(img, pos):
    for x in range(pos.x, pos.x + 400):
        img[x, pos.y] = sf.Color.RED
        img[x, pos.y + 50] = sf.Color.RED
    for y in range(pos.y, pos.y + 50):
        img[pos.x, y] = sf.Color.RED
        img[pos.x + 400, y] = sf.Color.RED

def draw_square(img, width, height, pos):
    for pix_x in range(0, width):
        img[pix_x + pos.x, pos.y] = sf.Color.WHITE
        img[pix_x + pos.x, pos.y + height] = sf.Color.WHITE
    for pix_y in range(0, height):
        img[pos.x, pix_y + pos.y] = sf.Color.WHITE
        img[pos.x + width, pix_y + pos.y] = sf.Color.WHITE

def draw_blocks(img, blocks):
    pos_of_block = sf.Vector2(0, 0)
    pos_x = 0
    for column in blocks:
        pos_y = 0
        for is_block in column:
            if is_block is 1:
                pos_of_block.x = pos_x
                pos_of_block.y = pos_y
                draw_square(img, 300, 50, pos_of_block)
            pos_y = pos_y + 50
        pos_x = pos_x + 300

def draw_everything(img, ball, posr):
    draw_ball(img, ball.pos)
    draw_raquet(img, posr)
    draw_blocks(img, ball.blocks)
