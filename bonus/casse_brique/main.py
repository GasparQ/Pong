#!
import sfml as sf
import objects as obj
import draw_obj as drw
import collision_gestion as col_g
import obj_gestion as obj_g

def home_page(window):
    text = sf.Texture.from_file("images/home.png")
    window.clear()
    sprite = sf.Sprite(text)
    window.draw(sprite)
    window.display()

def win_or_lose(ball, img, window):
    if ball.pos.y > 950:
        game_on = False
        text = sf.Texture.from_file("images/lose.png")
    elif ball.win == 25:
        game_on = False
        text = sf.Texture.from_file("images/win.png")
    else:
        text = sf.Texture.from_image(img)
        game_on = True
    sprite = sf.Sprite(text)
    window.draw(sprite)
    window.display()
    return game_on

def main():
    window = sf.RenderWindow(sf.VideoMode(1500, 900), "Pong")
    field = 0
    ball = obj.Ball()
    posr = sf.Vector2(600, 830)
    clock = sf.Clock()
    game_on = False
    home_page(window)
    while (window.is_open):
        for event in window.events:
            if type(event) is sf.CloseEvent:
                window.close()
            if sf.Keyboard.is_key_pressed(sf.Keyboard.RETURN):
                game_on = True
        if game_on is True:
            window.clear()
            time_passed = clock.restart().seconds
            ref_time = time_passed * 400
            posr = obj_g.move_raquet(posr, ref_time)
            ball.pos = obj_g.move_ball(ball, ref_time)
            del field
            field = sf.Image.create(1600, 1000, sf.Color.TRANSPARENT)
            ball = col_g.collision_gestion(ball, posr)
            drw.draw_everything(field, ball, posr)
            game_on = win_or_lose(ball, field, window)

main()
