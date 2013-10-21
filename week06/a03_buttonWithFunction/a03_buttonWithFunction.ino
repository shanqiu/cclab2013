/*
  Blink
 Turns on an LED on for one second, then off for one second, repeatedly.
 
 This example code is in the public domain.
 */

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led1 = 13;
int led2 = 10; //digital pin 10
int led3 = 9; //digital pin 9

int myButton = 2; //button connected to digital pin 2

// the setup routine runs once when you press reset
// or when board is powered on
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);  

  //initialize digital pin 2 as an INPUT pin
  pinMode(myButton, INPUT); 
}

// the loop routine runs over and over again forever:
void loop() {

  //read the button on this loop, store it's state in "buttonState"
  int buttonState = digitalRead(myButton);

  if(buttonState == HIGH){ //if the button is being pressed
    blinkSpeedUpFunction(); //run the blinkSpeedUpFunction!
  }  
  else { //if the button is LOW, it's NOT being pressed.
    //turn all the LEDs off.
    digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(led2, LOW);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(led3, LOW);   // turn the LED on (HIGH is the voltage level)
  }
}

void blinkSpeedUpFunction(){

  // "for i starting at 500, while i is greater than 0, subtract 50 from i"
  for(int i=500; i>0; i-=50){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    
    delay(i); //delay for current value of i
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    
    delay(i); //delay for current value of i
  }
}


