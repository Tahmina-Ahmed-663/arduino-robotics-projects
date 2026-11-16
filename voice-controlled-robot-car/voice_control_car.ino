String readString = ""; 
#define IN1 11 
#define IN2 10  
#define IN3 9 
#define IN4 8
int ena=6;  // A
int enab=5;     //B
#define led 12 //
void setup() {
pinMode(ena, OUTPUT);
pinMode(enab, OUTPUT);
pinMode(led, OUTPUT); 
digitalWrite(led, LOW);
pinMode(IN1,OUTPUT); //IN1 Pin set for MotorA Output-1.
pinMode(IN2,OUTPUT); //IN2 Pin set for MotorA Output-2.

  
pinMode(IN3,OUTPUT); //IN3 Pin set for MotorB Output-3.
pinMode(IN4,OUTPUT); //IN4 Pin set for MotorB Output-4.
Serial.begin(9600);

}

void loop(){

  while (Serial.available()) {

char c = (char) Serial.read();
readString += c;
  }
  Serial.println(readString);
if (readString.length() > 0) {
if (readString == "go") {
  {
  digitalWrite(IN1,HIGH);  
     digitalWrite(IN2,LOW);   
     digitalWrite(IN3,HIGH);  
     digitalWrite(IN4,LOW);
     analogWrite(ena,50);
     analogWrite(enab,50);  
  }  
   delay(1000);  

Serial.print("forward");
}
else if (readString == "back"){
digitalWrite(IN1,LOW);   
     digitalWrite(IN2,HIGH);  
     digitalWrite(IN3,LOW);   
     digitalWrite(IN4,HIGH);
     analogWrite(ena,50);
     analogWrite(enab,50); 
     delay(1000);  
Serial.print("back");
}
else if (readString == "stop"){
     digitalWrite(IN1,LOW);   
     digitalWrite(IN2,LOW);  
     digitalWrite(IN3,LOW);   
     digitalWrite(IN4,LOW);
     analogWrite(ena,50);
     analogWrite(enab,50); 
     delay(1000);  
Serial.print("back");
}

else if (readString == "right"){
  digitalWrite(IN1,LOW); 
     digitalWrite(IN2,HIGH);
     digitalWrite(IN3,HIGH);  
     digitalWrite(IN4,LOW);
     analogWrite(ena,50);
     analogWrite(enab,50); 
     delay(800);
     digitalWrite(IN1,LOW);   
     digitalWrite(IN2,LOW);  
     digitalWrite(IN3,LOW);   
     digitalWrite(IN4,LOW);
Serial.print("right");
}
else if(readString == "left"){
 digitalWrite(IN1,HIGH);    
     digitalWrite(IN2,LOW);     
     digitalWrite(IN3,LOW);   
     digitalWrite(IN4,HIGH);
     analogWrite(ena,50);
     analogWrite(enab,50); 
     delay(800);   
     digitalWrite(IN1,LOW);   
     digitalWrite(IN2,LOW);  
     digitalWrite(IN3,LOW);   
     digitalWrite(IN4,LOW);
Serial.print("left");

}
else if(readString == "light"){
  digitalWrite(led,HIGH);
  delay(2000);
Serial.print("left");

}
readString = "";
}
delay(100);
}