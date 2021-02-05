

int Drukkie = 12;
int Lampie = 11;
int Fannie = 10;


void setup() {
  
  pinMode(Lampie, OUTPUT);
  pinMode(Fannie, OUTPUT);
  pinMode(Drukkie, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  digitalWrite(Lampie, HIGH);
  digitalWrite(Fannie, HIGH);
  digitalWrite(Drukkie, HIGH);
  delay(5000);
  digitalWrite(Lampie, LOW);
  digitalWrite(Fannie, LOW);
  digitalWrite(Drukkie, LOW);
  delay(5000);

}
