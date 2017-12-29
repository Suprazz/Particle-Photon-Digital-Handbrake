#include "Particle.h"
// EXAMPLE USAGE
// Use STARTUP() macro to avoid USB disconnect/reconnect (see begin() documentation)
SYSTEM_MODE(MANUAL);
STARTUP(Keyboard.begin());

#define HANDBRAKE_BTN D0

void setup() {
/*
  // Type 'SHIFT+h', 'e', 'l', 'l', 'o', 'SPACE', 'w', 'o', 'r', 'l', 'd', 'ENTER'
  Keyboard.println("Hello world!");

  // Type 'SHIFT+t', 'e', 's', 't', 'SPACE', '1', '2', '3', '.', '4', '0', 'ENTER'
  Keyboard.printf("%s %.2f\n", "Test", 123.4f);

  // Quickly press and release Ctrl-Alt-Delete
  Keyboard.click(KEY_DELETE, MOD_LCTRL | MOD_LALT);

  // Press Ctrl, then Alt, then Delete and release them all
  Keyboard.press(KEY_LCTRL);
  Keyboard.press(KEY_LALT);
  Keyboard.press(KEY_DELETE);
  Keyboard.releaseAll();
  */
  pinMode(HANDBRAKE_BTN, INPUT_PULLUP);
}

void loop() {
	if(digitalRead(HANDBRAKE_BTN) == 0)
		Keyboard.press(KEY_B);
	else
		Keyboard.release(KEY_B);
		
}