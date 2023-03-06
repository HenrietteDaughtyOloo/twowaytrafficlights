int RED = 1;
int YELLOW = 2;
int GREEN = 3;
int Button = 0;

int red = 13;
int yellow = 11;
int green = 8;
int button = 0;

void setup(){ pinMode(RED,OUTPUT);
              pinMode(YELLOW,OUTPUT);
              pinMode(GREEN,OUTPUT);
              pinMode(Button,INPUT_PULLUP);
              pinMode(red,OUTPUT);
             pinMode(yellow,OUTPUT);
             pinMode(green,OUTPUT);
             pinMode(button,INPUT_PULLUP);
             
            }

void loop(){
  
         
  
  			if(digitalRead(Button)==HIGH)
                 {
                    digitalWrite(RED,HIGH);
              		digitalWrite(green,HIGH);
                    delay(5000);
                    digitalWrite(red,LOW);
              		digitalWrite(GREEN,LOW);
                 }
             else 
                 {
                    digitalWrite(red,HIGH);
               		digitalWrite(GREEN,HIGH);
                    delay(5000);
                    
                    digitalWrite(yellow,HIGH);
               		digitalWrite(YELLOW,HIGH);
                    delay(3000);
                    digitalWrite(red,LOW);
               		digitalWrite(GREEN,LOW);
                    digitalWrite(yellow,LOW);
               		digitalWrite(YELLOW,LOW);
               
                    digitalWrite(green,HIGH);
               		digitalWrite(RED,HIGH);
                    delay(5000);                   
                    digitalWrite(yellow,HIGH);
               		digitalWrite(YELLOW,HIGH);
                    delay(3000);
                    digitalWrite(green,LOW);
               		digitalWrite(RED,LOW);
                    digitalWrite(yellow,LOW);
               		digitalWrite(YELLOW,LOW);
                    }
  
                    
  
  
  
                  }
