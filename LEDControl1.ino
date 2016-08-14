#include <WS2812.h>

WS2812 LED(2); // 1 LED
char mycol[20];
cRGB value;

void setup() {
  Serial.begin(9600);
  LED.setOutput(1); // Digital Pin 1
}

void loop() {
  
  Serial.readBytesUntil(10, mycol, 2) ;
  if(mycol[0]=='b')
  {
    value.b = 255; value.g = 0; value.r = 0; // RGB Value -> Blue
  LED.set_crgb_at(0, value); // Set value at LED found at index 0
  LED.sync(); // Sends the value to the LED   
  }
  else if(mycol[0]=='r')
  {
     value.b = 0; value.g = 0; value.r = 255; // RGB Value -> Red
     LED.set_crgb_at(0, value); // Set value at LED found at index 0
     LED.sync(); // Sends the value to the LED  
  }
  else if(mycol[0]=='g')
  {
      value.b = 0; value.g = 255; value.r = 0; // RGB Value -> Red
     LED.set_crgb_at(0, value); // Set value at LED found at index 0
     LED.sync(); // Sends the value to the LED  
  }
  else
  {
    
  }



  if(mycol[1]=='b')
  {
    value.b = 255; value.g = 0; value.r = 0; // RGB Value -> Blue
  LED.set_crgb_at(1, value); // Set value at LED found at index 0
  LED.sync(); // Sends the value to the LED   
  }
  else if(mycol[1]=='r')
  {
     value.b = 0; value.g = 0; value.r = 255; // RGB Value -> Red
     LED.set_crgb_at(1, value); // Set value at LED found at index 0
     LED.sync(); // Sends the value to the LED  
  }
  else if(mycol[1]=='g')
  {
      value.b = 0; value.g = 255; value.r = 0; // RGB Value -> Red
     LED.set_crgb_at(1, value); // Set value at LED found at index 0
     LED.sync(); // Sends the value to the LED  
  }
  else
  {
    
  }  
  
}
