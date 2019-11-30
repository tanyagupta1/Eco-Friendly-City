//set pin numbers
//const won't change
const int ledPin = 13;   //the number of the LED pin
const int ldrPin = A0;
const int ldrPin1 = A1;
const int ldrPin2 = A2;
const int ldrPin3 = A3;
const int ldrPin4 = 12;
const int ldrPin5 = 8;
const int ldrPin6 = 7;


//the number of the LDR pin


void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  //initialize the LED pin as an output
  pinMode(ldrPin4, OUTPUT);
  pinMode(ldrPin5, OUTPUT);
  pinMode(ldrPin6, OUTPUT);
  pinMode(ldrPin, INPUT);   //initialize the LDR pin as an input
  pinMode(ldrPin1, INPUT);
  pinMode(ldrPin2, INPUT);
  pinMode(ldrPin3, INPUT);
}

void loop() {

  int ldrStatus = analogRead(ldrPin);   //read the status of the LDR value

  //check if the LDR status is <= 300
  //if it is, the LED is HIGH

   if (ldrStatus <=1) {

    digitalWrite(ledPin, HIGH);               //turn LED on
    Serial.println("LDR is DARK, LED is ON");
    
   }
  else {

    digitalWrite(ledPin, LOW);          //turn LED off
    Serial.println("---------------");
  }

  int ldrStatus2 = analogRead(ldrPin1);   //read the status of the LDR value

  //check if the LDR status is <= 300
  //if it is, the LED is HIGH

   if (ldrStatus2 <=1) {

    digitalWrite(ldrPin4, HIGH);               //turn LED on
    Serial.println("LDR is DARK, LED is ON");
    
   }
  else {

    digitalWrite(ldrPin4, LOW);          //turn LED off
    Serial.println("---------------");
  }

int ldrStatus3 = analogRead(ldrPin2);   //read the status of the LDR value

  //check if the LDR status is <= 300
  //if it is, the LED is HIGH

   if (ldrStatus3 <40) {

    digitalWrite(ldrPin5, HIGH);               //turn LED on
    Serial.println(ldrStatus3);
    
   }
  else {

    digitalWrite(ldrPin5, LOW);          //turn LED off
    Serial.println(ldrStatus3);
  }



















  
}
