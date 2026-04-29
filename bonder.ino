#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell -windowstyle hidden -command notepad.exe");
  DigiKeyboard.delay(1000);

  DigiKeyboard.println(F("  _________________________________"));
  DigiKeyboard.println(F(" |.--------_--_------------_--__--.|"));
  DigiKeyboard.println(F(" ||    /\\ |_)|_)|   /\\ | |(_ |_   ||"));
  DigiKeyboard.println(F(" ;;`,_/``\\|__|__|__/``\\|_| _)|__ ,:|"));
  DigiKeyboard.println(F("((_(-,-----------.-.----------.-.)`)"));
  DigiKeyboard.println(F(" \\__ )        ,'     `.        \\ _/"));
  DigiKeyboard.println(F(" :  :        |_________|       :  :"));
  DigiKeyboard.println(F(" |-'|       ,'-.-.--.-.`.      |`-|"));
  DigiKeyboard.println(F(" |_.|      (( (*  )(*  )))     |._|"));
  DigiKeyboard.println(F(" |  |       `.-`-'--`-'.'      |  |"));
  DigiKeyboard.println(F(" |-'|        | ,-.-.-. |       |._|"));
  DigiKeyboard.println(F(" |  |        |(|-|-|-|)|       |  |"));
  DigiKeyboard.println(F(" :,':        |_`-'-'-'_|       ;`.;"));
  DigiKeyboard.println(F("  \\  \\     ,'           `.    /._/"));
  DigiKeyboard.println(F("   \\/ `._ /_______________\\_,'  /"));
  DigiKeyboard.println(F("    \\  / :   ___________   : \\,'"));
  DigiKeyboard.println(F("     `.| |  |           |  |,'"));
  DigiKeyboard.println(F("       `.|  |           |  |"));
  DigiKeyboard.println(F("         |  | SSt       |  |"));
  DigiKeyboard.println(F("------------------------------------------------"));
}
void loop() {
}
