int value = 0;

void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(1200);
}

void loop() {
//Serial.println("HELLO");
  value = analogRead(0);
  Serial.println(value);
if (value < 300) 
{
    digitalWrite(LED_BUILTIN, HIGH);
   
}  


else
{
  digitalWrite(LED_BUILTIN, LOW);
}

 delay(1000);
}



