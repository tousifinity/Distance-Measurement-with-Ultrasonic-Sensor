#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int trig_pin = 7;
int echo_pin = 8;

void setup()
{
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  Serial.begin(9600);

  lcd.init();             
  lcd.backlight(); 
}

void loop()
{
  digitalWrite(trig_pin, HIGH);
  //delay(10*1000); //10us
  delayMicroseconds(10);
  
  digitalWrite(trig_pin, LOW);

  float time_duration = pulseIn(echo_pin, HIGH);
  float t = time_duration*0.000001;
  float s = 340*t;
  float actual_distance = s/2.0;

  Serial.println(actual_distance);
  delay(2000);
  
  lcd.clear();
      
  lcd.setCursor(0, 0); // start to print at the first row
  lcd.print("Distance: ");
  lcd.print(actual_distance);
  delay(2000);
}
