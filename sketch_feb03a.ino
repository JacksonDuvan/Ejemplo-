#include <Servo.h>

Servo servo;

int pecho = 6;
int ptrig = 5;
int duracion,distancia;

void setup(){
  servo.attach(8);
  
  pinMode(pecho,INPUT);
  pinMode(ptrig,OUTPUT);
  pinMode(13,OUTPUT);
}
void loop(){
  digitalWrite(ptrig, HIGH);   
     delay(0.01);
     digitalWrite(ptrig, LOW);
     
     duracion = pulseIn(pecho, HIGH);              
     distancia = (duracion/2) / 29;            
     delay(10); 
     
     if (distancia <= 10a && distancia >=2){    
         servo.write(180);
         digitalWrite(13,HIGH); 
     }
      else{
         servo.write(0);
         digitalWrite(13,LOW);
         
      }
        
}
