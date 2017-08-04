int value = 0;

void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

}

void loop() {
//Serial.println("HELLO");
  value = analogRead(0);
  Serial.println(value);
if (value < 300) 
{
    digitalWrite(LED_BUILTIN, HIGH);
   
}  


else if (value > 600)
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
}

 delay(1000);

}
