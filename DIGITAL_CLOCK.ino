#include<LiquidCrystal_I2C.h>
#include<Wire.h>
LiquidCrystal_I2C lcd(0x20,16,2);
#define button_1 7
#define button_2 6

int sec = 50;
int min = 59;
int hur = 12;

String ampm = "PM";
void clock();
void setup()
{
  lcd.init();
  Serial.begin(9600);
  pinMode(button_1,INPUT);
  pinMode(button_2,INPUT);  
}
void loop()
{
  if(digitalRead(button_1)==HIGH)
  {
    min++;
    if(min>=60)
    {
      min=0;
      
    }
    delay(10);
  }
   else if(digitalRead(button_2)==HIGH)
  {
    hur++;
    if(hur>=13)
    {
      hur=0;
    }
   delay(10);

  }
   Serial.println(String(hur)+":"+String(min)+":"+String(sec)+" "+ampm+" ");
  clock();
  
}
void clock()
{
  lcd.setCursor(0,0);
  lcd.print("------TIME------");
  lcd.setCursor(2,1);
  lcd.print(String(hur)+":"+String(min)+":"+String(sec)+" "+ampm+" ");
  sec++;
  if(sec>=60)
  {
    min++;
    sec=0;
    if(min>=60)
    {
      hur++;
      lcd.clear();
      min=0;
      if(hur>=12)
      {
        hur=0;
        
        if(ampm == "AM")
        {
          ampm = "PM";
        }
        else
        {
          ampm = "AM";
        }
      }
    }
  }
  delay(1000);
}