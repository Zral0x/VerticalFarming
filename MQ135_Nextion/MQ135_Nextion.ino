
#define sensor_1  A0

int gasLevel = 0;
String quality ="";



void setup() 
{
  Serial.begin(9600);
}

void loop() {

  gasLevel = analogRead(sensor_1);

  if(gasLevel<175){
    quality = "d";
  }
  else if (gasLevel >175 && gasLevel<225){
    quality = "c";
  }
  else if (gasLevel >225 && gasLevel<300){
    quality = "b";
  }
  else if (gasLevel >300){
    quality = "a";
  }



  sendGasToNextion();
  sendQualityToNextion();
  delay(2000);
}


void sendGasToNextion()
{
  String command = "gasLevel.txt=\""+String(gasLevel)+"\"";
  Serial.print(command);
  endNextionCommand();
}

void sendQualityToNextion()
{
  String command = "quality.txt=\""+String(quality)+"\"";
  Serial.print(command);
  endNextionCommand();
}

void endNextionCommand()
{
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.write(0xff);
}
