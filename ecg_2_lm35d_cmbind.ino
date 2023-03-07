//initializes/defines the output pin of the LM35 temperature sensor

#define INPUT_PIN  A5 // use analog Read pin-A5.

//

void setup()
{
  Serial.begin(115200);
        Serial.println("LM35 Reading Start");
// initialize the serial communication:
Serial.begin(9600);
pinMode(10, INPUT); // Setup for leads off detection LO +
pinMode(11, INPUT); // Setup for leads off detection LO -
 
}

//main loop
void loop()
{
if((digitalRead(10) == 1)||(digitalRead(11) == 1)){
Serial.println('!');
}
else{
// send the value of analog input 0:
Serial.println(analogRead(A0));
}
//Wait for a bit to keep serial data from saturating
delay(1);
  int rawvoltage = analogRead(INPUT_PIN);
  float millivolts = (rawvoltage/1024.0) * 5000; // convert raw value in to voltage.
  float celsius= millivolts/10;
  Serial.print(celsius);
  Serial.print(" degrees Celsius, "); // print value in degrees Celsius

 
 

  delay(1000);
}
