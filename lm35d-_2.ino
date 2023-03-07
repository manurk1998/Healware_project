float LM35_val;
int LM35_Pin = 0;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  LM35_val = analogRead(LM35_Pin);
  
  float mv = ( LM35_val / 1024.0) * 5000;
  float cel = mv / 10;
  
  Serial.print("TEMPRATURE in Celcius = ");
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();
  
  delay(1000);
}
