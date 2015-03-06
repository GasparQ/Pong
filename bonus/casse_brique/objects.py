import sfml as sf
import obj_gestion as obj_g

class Ball:
    def __init__(ball):
        ball.pos = sf.Vector2(400, 300)
        ball.dir = sf.Vector2(1, 1)
        ball.blocks = list()
        ball.blocks = obj_g.init_blocks(ball.blocks)
        ball.win = 0
