/*
 * Projeto controle luz
 * 
 */
 
#define BLYNK_TEMPLATE_ID ""
#define BLYNK_DEVICE_NAME ""
#define BLYNK_AUTH_TOKEN ""
#include <ESP8266WiFi.h> 
#include <BlynkSimpleEsp8266.h>
#define BLYNK_PRINT Serial
const char* ssid = "";
const char* senha = "";

char auth[] = BLYNK_AUTH_TOKEN;
unsigned long interval;
boolean st=0;
int valor,valor1 ;
BlynkTimer timerled;


  
BLYNK_WRITE(V0)
{
   valor= param.asInt();   
   if (valor ==1)
   {
    digitalWrite(2,0);
   }
   else
   {
     digitalWrite(2,1);
   }
     
  
   
     
        
    
  }
  
 BLYNK_WRITE(V1)
{
   valor1= param.asInt();   
   if(valor1 ==1)
   {
    digitalWrite(0,valor1);
   }
   else
   {
    digitalWrite(0,valor1);
   }
   }
     
  
   
     
        
    
  
void setup() 
{
   Serial.begin(9600);
   pinMode(2,OUTPUT);   
   pinMode(0,OUTPUT);  
   digitalWrite(2,1);
   digitalWrite(0,1);
   Blynk.begin(auth, ssid, senha);
  // timerled.setInterval(500L,piscaled);
}
  


void loop() 
{
   Blynk.run();
  // timerled.run();
}
