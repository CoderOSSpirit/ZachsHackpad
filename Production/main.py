import board
from kmk.kmk_keyboard import KMKKeyboard
from kmk.scanners.keypad import KeysScanner
from kmk.keys import KC
from kmk.modules.macros import Press, Release, Tap, Macros
from kmk.scanners import DiodeOrientation
from kmk.extensions.RGB import RGB

keyboard = KMKKeyboard()

macros = Macros()
keyboard.modules.append(macros)

#No matrix
keyboard.matrix = KeysScanner(
    pins=PINS,
    value_when_pressed=False,
)

# Here you define the buttons corresponding to the pins
# Look here for keycodes: https://github.com/KMKfw/kmk_firmware/blob/main/docs/en/keycodes.md
# And here for macros: https://github.com/KMKfw/kmk_firmware/blob/main/docs/en/macros.md
keyboard.keymap = [
    [KC.A, KC.DELETE, KC.MACRO("Hello world!"), KC.Macro(Press(KC.LCMD), Tap(KC.S), Release(KC.LCMD)),]
]

#Rotary Encoder
from kmk.modules.encoder import EncoderHandler
encoder_handler = EncoderHandler()
keyboard.modules = [layers, holdtap, encoder_handler]
encoder_handler.pins = (
    board.D2, board.D1, board.D3
)


#Defining inputs to the devices
PINS = [board.D8, board.D9, board.D10, board.D11]


#OLED Display
import adafruit_ssd1306
from adafruit_display_text import label
oled = adafruit_ssd1306.SSD1306_I2C(128, 32, i2c)
oled.fill(0)
oled.text('Hello', 0, 0, 100)
oled.show()


# Start kmk!
if __name__ == '__main__':
    keyboard.go()