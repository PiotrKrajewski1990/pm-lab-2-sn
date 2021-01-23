

#include<Arduino.h>
 
#define ADC_RESOLUTION_DEFAULT (5.0f / 1024.0f)
uint16_tdigital;
flcat voltage;
 
voidsetup() {​​​​​​​​
Serial.begin(9600);
analogReference(default);
pinMode(AO, INPUT);
}​​​​​​​​
 
voidloop() {​​​​​​​​
  degital = analogRead(AO);
voltage = ADC_RESOLUTION_DEFAULT * digital;
Serial.print("AO = ");
Serial.print(digital);
Serial.print("\t V(O) = ");
Serial.print(voltage);
Serial.println(" [V]");
delay(1000);
}​​​​​​​​

