import sfml as sf
import objects as obj

def move_ball(ball, ref_time):
    sf.sleep(sf.milliseconds(3))
    if ball.pos.x + ref_time * ball.dir.x <= 1475:
        if ball.pos.x + ref_time * ball.dir.x >= 26:
            ball.pos.x = ball.pos.x + ref_time * ball.dir.x
        else:
            ball.pos.x = ball.pos.x + ref_time * ball.dir.x + 5 * ball.dir.x
    if ball.pos.y + ref_time * ball.dir.y <= 975:
        if ball.pos.y + ref_time * ball.dir.y >= 25:
            ball.pos.y = ball.pos.y + ref_time * ball.dir.y
        else:
            ball.pos.y = ball.pos.y + ref_time * ball.dir.y + 5 * ball.dir.y
    return ball.pos

def move_raquet(posr, ref_time):
    if sf.Keyboard.is_key_pressed(sf.Keyboard.LEFT):
        if posr.x - ref_time > 10:
            posr.x = (int)(posr.x - ref_time)
    elif sf.Keyboard.is_key_pressed(sf.Keyboard.RIGHT):
        if posr.x + ref_time <= 1090:
            posr.x = (int)(posr.x + ref_time)
    return posr

def init_blocks(blocks):
    blocks.append([1, 1, 1, 1, 1])
    blocks.append([1, 1, 1, 1, 1])
    blocks.append([1, 1, 1, 1, 1])
    blocks.append([1, 1, 1, 1, 1])
    blocks.append([1, 1, 1, 1, 1])
    return blocks
