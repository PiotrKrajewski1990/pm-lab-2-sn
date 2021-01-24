#include <Arduino.h>
#include <avr/io.h>
#include <avr/interrupt.h>
ISR(TIMER1_OVF_vect){
}
void setup() 
{
  DDRD &= ~(1<<DDD5);
  PORTD |=(1<<PORTD5);
  TIMSK1 |=(1<<TOIE1);
  TCCR1B|=(1<<CS12)|(1<<CS11)|(1<<CS10);
  sei();
 Serial.begin(9600);
}
 
void loop() 
{
Serial.println(TCNT1);
delay(2000);
 
}