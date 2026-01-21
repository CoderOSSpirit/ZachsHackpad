/* If flashing code fails:
   1) Hold Reset, then hold Boot, relese Reset.
      This will open a folder with INDEX & IFO_UF2 files.
   2) Place file blink.ino.elf.uf2 in the folder,
      which should flash the board and close the folder.
   3) You may need to press Reset again, but the Xiao
      should be visible in the Arduino IDE under Ports again.

      ***WS2812 RGB Neopixel on Pin 12***
       ***Requires Pin 11 to be HIGH***

*/

#include <Keyboard.h>
#include <Arduino.h>
#include <USB.h>
#include <Wire.h>


int Power = 14;
int PIN  = 12;
int up = D10;
int left = D9;
int down = D8;
int right = D7;

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

void setup() {

  pinMode(Power, OUTPUT);
  digitalWrite(Power, HIGH);
  pinMode(up, INPUT_PULLUP);
  pinMode(left, INPUT_PULLUP);
  pinMode(down, INPUT_PULLUP);
  pinMode(right, INPUT_PULLUP);
  Serial.begin(115200);
  USB.begin();
  Keyboard.begin();
}
void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(up) == LOW) {
    Keyboard.press(KEY_UP_ARROW);
      Keyboard.releaseAll();
  }
    if (digitalRead(down) == LOW) {
    Keyboard.press(KEY_DOWN_ARROW);
      Keyboard.releaseAll();
  }
    if (digitalRead(left) == LOW) {
    Keyboard.press(KEY_LEFT_ARROW);
      Keyboard.releaseAll();
  }
  if (digitalRead(right) == LOW) {
    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.releaseAll();
  }
  delay(100);
}
