//ATK_SIM_900_Sample Code RoboticsBD

#include <SoftwareSerial.h>
SoftwareSerial SIM900(8, 7);  // RX, TX
 
void setup()
{
  SIM900.begin(19200);                
  delay(20000);
}
 
void callRoboticsBD()
{
  SIM900.println("ATD + +880175099197;"); // RoboticsBD Contact
  delay(100);
  SIM900.println();
  delay(30000);            
  SIM900.println("ATH");
}
 
void loop()
{
  callRoboticsBD();
  do {} while (1);}
