void setup() {
  //This is for the serial monitor. Remove the // if you need to use it.
  //Serial.begin(9600);
  
  //This is for serial port 1, which is the one used for the Nextion in this demonstration.
  //You might need to change this depending on which serial port you are using for your display.
  Serial.begin(38400);
  
  //For demonstration

}
void loop() {
  Serial.print(F("t1.txt=\""));
  Serial.print(F("12"));
  Serial.print(F("\""));
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.write(0xff);
}
