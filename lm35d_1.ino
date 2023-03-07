float LM35_val;
int LM35_Pin = 0;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  LM35_val = analogRead(LM35_Pin);
  Serial.print("Raw Value from Sensor is : ");
  Serial.print(LM35_val);
  Serial.println();
  delay(1000);
}
