#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

#define sensor_pin A0 
int read_ADC;
int ntu;
 
void setup(){// put your setup code here, to run once 
  Serial.begin(9600);
pinMode(sensor_pin, INPUT);
 lcd.init();
  lcd.backlight();
lcd.clear();
lcd.setCursor (0,0);
lcd.print("   Welcome To   ");
lcd.setCursor (0,1);
lcd.print("Turbidity Sensor"); 
delay(2000);
lcd.clear();
}
 
void loop(){
  
read_ADC = analogRead(sensor_pin);

Serial.println(read_ADC);
//if(read_ADC>208)read_ADC=208;
//
//ntu = map(read_ADC, 0, 208, 300, 0); 

if(read_ADC>710)
{ 
lcd.clear();  
lcd.setCursor(0,0);
lcd.print("Turbidity: ");
lcd.print(read_ADC);
lcd.print("  ");
lcd.setCursor(1,1);
lcd.print("Water is clean drinkable  "); 
}
else if(read_ADC<570)
{ 
lcd.clear();  
lcd.setCursor(0,0);
lcd.print("Turbidity: ");
lcd.print(read_ADC);
lcd.print("  ");
lcd.setCursor(1,1);
lcd.print("Water is Dirty not use   "); 
}

else
{
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Turbidity: ");
lcd.print(read_ADC);
lcd.print("  ");
lcd.setCursor(1,1);
lcd.print("Water is Normal usable  ");  
}

//lcd.setCursor(0,1);//set cursor (colum by row) indexing from 0
//if(ntu<10)            lcd.print("Water Very Clean");
//if(ntu>=10 && ntu<30) lcd.print("Water Norm Clean");
//if(ntu>=30)           lcd.print("Water Very Dirty");

delay(200);
}
