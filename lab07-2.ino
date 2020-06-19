#include <LiquidCrystal.h> // include the library code
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // initialize interface pins
String x , y ;
int i,j=0;
void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2); // set up the LCD's number of columns and rows:

}
void loop() {
  if(Serial.available())
  {
    x = Serial.readString();
  }
  lcd.setCursor(0, 1);
  for(i=0;x[i]!=0;i++)
  ;

  for(j=0;j<i-1;j++)
    lcd.print(x[j]);
}
