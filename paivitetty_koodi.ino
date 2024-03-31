
int BUTTON = 13;
int luku = 0;

int pinA = 6;
int pinB = 8;
int pinC = 11;
int pinD = 10;
int pinE = 9;
int pinF = 7;
int pinG = 12;

int D1 = 2;
int D2 = 3;
int D3 = 4;
int D4 = 5;

byte lastButtonState = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
  byte buttonState = digitalRead(BUTTON);
  if(buttonState != lastButtonState){
    lastButtonState = (buttonState);
    luku = random(1,3);
  
    if(luku == 1){
      digitalWrite(D1, HIGH);
      digitalWrite(D2, LOW); // NOTE that LOW denotes the active digit
      digitalWrite(D3, HIGH);
      digitalWrite(D4, HIGH);
      //2 näytön numero
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, LOW); // NOTE that HIGH denotes an active SEGMENT
      digitalWrite(pinC, LOW);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, LOW);
      delay(1); 

      digitalWrite(D1, HIGH);
      digitalWrite(D2, HIGH);
      digitalWrite(D3, LOW); // NOTE that LOW denotes the active DIGIT
      digitalWrite(D4, HIGH);
      //3 näytön numero
      digitalWrite(pinA, LOW); // NOTE that HIGH denotes an active SEGMENT
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, LOW);
      delay(1); 
      //tila = 0;
    }

    if(luku == 2){
      digitalWrite(D1, HIGH);
      digitalWrite(D2, LOW); // NOTE that LOW denotes the active digit
      digitalWrite(D3, HIGH);
      digitalWrite(D4, HIGH);
      //2 näytön numero
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, LOW); // NOTE that HIGH denotes an active SEGMENT
      digitalWrite(pinC, LOW);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, LOW);
      delay(1); 

      digitalWrite(D1, HIGH);
      digitalWrite(D2, HIGH);
      digitalWrite(D3, LOW); // NOTE that LOW denotes the active DIGIT
      digitalWrite(D4, HIGH);
      //3 näytön numero
      digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, LOW);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, HIGH);
      delay(1);
      //tila = 0;

    } 
  }
}
