/*
  Clignote la led sur le GPIO 2
 décimal hex
 57344  0xe000 C:\Users\anthony\AppData\Local\Arduino15\packages\esp32\hardware\esp32\1.0.3/tools/partitions/boot_app0.bin 
 4096   0x1000 C:\Users\anthony\AppData\Local\Arduino15\packages\esp32\hardware\esp32\1.0.3/tools/sdk/bin/bootloader_qio_80m.bin 
 65536  0x10000 C:\Users\anthony\AppData\Local\Temp\arduino_build_289016/blink_esp32.ino.bin 
 32768  0x8000 C:\Users\anthony\AppData\Local\Temp\arduino_build_289016/blink_esp32.ino.partitions.bin  
*/
#define LED 2

void setup() {
  pinMode(LED, OUTPUT);
}


void loop() {
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
