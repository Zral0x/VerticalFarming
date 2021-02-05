#include <DHT.h>;


int Drukkie = 12;
int Lampie = 11;
int Fannie = 10;

#define DHTPIN 2     // what pin we're connected to
#define DHTTYPE DHT22   // DHT 22  (AM2302)
DHT dht(DHTPIN, DHTTYPE); //// Initialize DHT sensor for normal 16mhz Arduino

int chk;
float hum;  //Stores humidity value
float temp; //Stores temperature value



void setup() {
  
  pinMode(Lampie, OUTPUT);
  pinMode(Fannie, OUTPUT);
  pinMode(Drukkie, OUTPUT);

  dht.begin();

  Serial.begin(9600);

}

void loop() {

  digitalWrite(Lampie, HIGH);

  delay(2000);
  hum = dht.readHumidity();
  temp= dht.readTemperature();
  Serial.print("Humidity: ");
  Serial.print(hum);
  Serial.print(" %, Temp: ");
  Serial.print(temp);
  Serial.println(" Celsius");
  delay(2000); //Delay 2 sec.
}
