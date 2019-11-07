#include <SoftwareSerial.h>

int sensorPin = A0; // select the input pin for the LDR

int sensorValue = 0; // variable to store the value coming from the sensor

int led = 3;

void setup() { // declare the ledPin as an OUTPUT:

pinMode(3, OUTPUT);
 pinMode(4, OUTPUT); 
pinMode(7, INPUT);
 pinMode(8, INPUT); 
Serial.begin(9600); }

void loop()

{
sensorValue = analogRead(sensorPin);

if (sensorValue < 100)

{
  if(digitalRead(7)== HIGH || digitalRead(8)== HIGH)

digitalWrite(3,HIGH);

delay(1000);

}
else if (digitalRead(7)== HIGH && digitalRead(8)== HIGH)
{
   digitalWrite(4,HIGH);
}
else
{
digitalWrite(3,LOW);
digitalWrite(4,LOW);

}


delay(sensorValue);

}
