/* How to use the DHT-22 sensor with Arduino uno
   Temperature and humidity sensor
*/

//Libraries
#include <DHT.h>;


int sensorValue;
int digitalValue;


//Constants
#define DHTPIN 2     // what pin we're connected to
#define DHTTYPE DHT22   // DHT 22  (AM2302)
DHT dht(DHTPIN, DHTTYPE); //// Initialize DHT sensor for normal 16mhz Arduino


//Variables
int chk;
float hum;  //Stores humidity value
float temp; //Stores temperature value

void setup()
{
  Serial.begin(9600);
  dht.begin();
}

void loop()
{
    delay(2000);
    //Read data and store it to variables hum and temp
    hum = dht.readHumidity();
    temp= dht.readTemperature();
    //Print temp and humidity values to serial monitor
    Serial.print("Humidity: ");
    Serial.print(hum);
    Serial.print(" %, Temp: ");
    Serial.print(temp);
    Serial.println(" Celsius");
    delay(2000); //Delay 2 sec.

    sensorValue = analogRead(0); // read analog input pin 0
    digitalValue = digitalRead(2); 
    if(sensorValue>400)
    {
    digitalWrite(13, HIGH);
    }
    else
    digitalWrite(13, LOW);
    Serial.println(sensorValue, DEC); // prints the value read
    Serial.println(digitalValue, DEC);
    delay(1000); // wait 100ms for next reading
}

   