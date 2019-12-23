float frequency;
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0){
    frequency=Serial.parseFloat();
    Serial.println(frequency );
  }
  digitalWrite(13, HIGH);
  delay(500/frequency); // Wait for 500 millisecond(s)
  digitalWrite(13, LOW);
  delay(500/frequency); // Wait for 500 millisecond(s)
}
