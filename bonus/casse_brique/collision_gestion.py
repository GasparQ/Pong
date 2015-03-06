import sfml as sf
import objects as obj

def brick_collision(ball, rank, blk):
    if ball.pos.y <= blk * 50 + 25 and ball.pos.y >= blk * 50 and blk > 0:
        if ball.dir.y == -1 and ball.blocks[rank][blk - 1] == 1:
            ball.blocks[rank][blk - 1] = 0
            ball.win = ball.win + 1
            ball.pos.y = blk * 50 + 25
            ball.dir.y = 1
    elif ball.pos.y >= (blk + 1) * 50 - 25 and blk < 4:
        if ball.dir.y == 1 and ball.blocks[rank][blk + 1] == 1:
            ball.blocks[rank][blk + 1] = 0
            ball.win = ball.win + 1
            ball.pos.y = (blk + 1) * 50 - 25
            ball.dir.y = -1
    if blk >= 0 and blk <= 4:
        if ball.pos.x <= rank * 300 + 25 and ball.pos.x >= rank * 300 and rank > 0:
            if ball.dir.x == - 1 and ball.blocks[rank - 1][blk] == 1:
                ball.blocks[rank - 1][blk] = 0
                ball.win = ball.win + 1
                ball.pos.x = rank * 300 + 25
                ball.dir.x = 1
        if ball.pos.x >= (rank + 1) * 300 - 25 and ball.pos.x <= (rank + 1) * 300 and rank < 4:
            if ball.dir.x == 1 and ball.blocks[rank + 1][blk] == 1:
                ball.blocks[rank + 1][blk] = 0
                ball.win = ball.win + 1
                ball.pos.x = (rank + 1) * 300 - 25
                ball.dir.x = -1
    return ball

def collision_gestion(ball, posr):
    rank = (int)(ball.pos.x / 300)
    blk = (int)(ball.pos.y / 50)
    if ball.pos.x <= 60:
        ball.pos.x = 60
        ball.dir.x = 1
    if ball.pos.x >= 1440:
        ball.pos.x = 1440
        ball.dir.x = -1
    if ball.pos.y >= 805 and ball.pos.x >= posr.x and ball.pos.x <= posr.x + 400:
        ball.pos.y = 805
        ball.dir.y = -1
        if ball.pos.x >= posr.x and ball.pos.x < posr.x + 150:
            ball.dir.x = -1
        elif ball.pos.x >= posr.x + 150 and ball.pos.x <= posr.x + 250:
            ball.dir.x = 0
        elif ball.pos.x > posr.x + 250 and ball.pos.x <= posr.x + 400:
            ball.dir.x = 1
    if ball.pos.y <= 33:
        ball.pos.y = 25
        ball.dir.y = 1
    if blk >= 0 and blk <= 5:
        ball = brick_collision(ball, rank, blk)
    return ball
