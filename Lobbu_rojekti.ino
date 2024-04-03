int luku = 0;
int luku2 = 0;

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

int BUTTON = 13;
int B_Delay = 5;

byte lastButtonState = HIGH;
unsigned long lastBounceTime = 0;

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
  Serial.begin(9600);
}

void loop() {
  byte buttonState = digitalRead(BUTTON);
  if(buttonState != lastButtonState){
    lastButtonState = (buttonState);
    lastBounceTime = millis();
  
    if(millis()-lastBounceTime > B_Delay){
      lastButtonState = buttonState;
    }

    if(buttonState == HIGH){
    luku = random(10,21);
    
      if (luku >= 10 && luku < 20){
        digitalWrite(D1, HIGH);
        digitalWrite(D2, LOW);
        digitalWrite(D3, HIGH);
        digitalWrite(D4, HIGH);

        digitalWrite(pinA, LOW);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, HIGH);
        digitalWrite(pinD, LOW);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, LOW);
        delay(500);

        digitalWrite(D1, HIGH);
        digitalWrite(D2, HIGH);
        digitalWrite(D3, LOW);
        digitalWrite(D4, HIGH);
        luku2 = luku - 10;
        switch (luku2){
          case 0:
          //3 näytön numero
            digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
            digitalWrite(pinB, HIGH);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, HIGH);
            digitalWrite(pinE, HIGH);
            digitalWrite(pinF, HIGH);
            digitalWrite(pinG, LOW);
            //tila = 0;
            break;
          case 1:
            //3 näytön numero
            digitalWrite(pinA, LOW); // NOTE that HIGH denotes an active SEGMENT
            digitalWrite(pinB, HIGH);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, LOW);
            digitalWrite(pinE, LOW);
            digitalWrite(pinF, LOW);
            digitalWrite(pinG, LOW);
            //tila = 0;
            break;
          case 2:
            //3 näytön numero
            digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
            digitalWrite(pinB, HIGH);
            digitalWrite(pinC, LOW);
            digitalWrite(pinD, HIGH);
            digitalWrite(pinE, HIGH);
            digitalWrite(pinF, LOW);
            digitalWrite(pinG, HIGH);
            //tila = 0;
            break;
          case 3:
            //3 näytön numero
            digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
            digitalWrite(pinB, HIGH);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, HIGH);
            digitalWrite(pinE, LOW);
            digitalWrite(pinF, LOW);
            digitalWrite(pinG, HIGH);
            //tila = 0;
            break;
          case 4:
            digitalWrite(pinA, LOW); // NOTE that HIGH denotes an active SEGMENT
            digitalWrite(pinB, HIGH);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, LOW);
            digitalWrite(pinE, LOW);
            digitalWrite(pinF, HIGH);
            digitalWrite(pinG, HIGH);
            //tila = 0;
            break;
          case 5:
            digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
            digitalWrite(pinB, LOW);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, HIGH);
            digitalWrite(pinE, LOW);
            digitalWrite(pinF, HIGH);
            digitalWrite(pinG, HIGH); 
            //tila = 0;
            break;
          case 6:
            digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
            digitalWrite(pinB, LOW);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, HIGH);
            digitalWrite(pinE, HIGH);
            digitalWrite(pinF, HIGH);
            digitalWrite(pinG, HIGH);
            //tila = 0;
            break;
          case 7:
            digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
            digitalWrite(pinB, HIGH);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, LOW);
            digitalWrite(pinE, LOW);
            digitalWrite(pinF, LOW);
            digitalWrite(pinG, LOW);
            //tila = 0;
            break;
          case 8:
            //numero 8
            digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
            digitalWrite(pinB, HIGH);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, HIGH);
            digitalWrite(pinE, HIGH);
            digitalWrite(pinF, HIGH);
            digitalWrite(pinG, HIGH);
            //tila = 0;
            break;
          case 9:
            digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
            digitalWrite(pinB, HIGH);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, HIGH);
            digitalWrite(pinE, LOW);
            digitalWrite(pinF, HIGH);
            digitalWrite(pinG, HIGH);
            //tila = 0;
            break;
        }
      }
        else{
          digitalWrite(D1, HIGH);
          digitalWrite(D2, HIGH);
          digitalWrite(D3, LOW);
          digitalWrite(D4, HIGH);
          luku2 = luku - 10;
          switch (luku2){
            case 0:
            //3 näytön numero
              digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
              digitalWrite(pinB, HIGH);
              digitalWrite(pinC, HIGH);
              digitalWrite(pinD, HIGH);
              digitalWrite(pinE, HIGH);
              digitalWrite(pinF, HIGH);
              digitalWrite(pinG, LOW);
              //tila = 0;
              break;
            case 1:
              //3 näytön numero
              digitalWrite(pinA, LOW); // NOTE that HIGH denotes an active SEGMENT
              digitalWrite(pinB, HIGH);
              digitalWrite(pinC, HIGH);
              digitalWrite(pinD, LOW);
              digitalWrite(pinE, LOW);
              digitalWrite(pinF, LOW);
              digitalWrite(pinG, LOW);
              //tila = 0;
              break;
            case 2:
              //3 näytön numero
              digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
              digitalWrite(pinB, HIGH);
              digitalWrite(pinC, LOW);
              digitalWrite(pinD, HIGH);
              digitalWrite(pinE, HIGH);
              digitalWrite(pinF, LOW);
              digitalWrite(pinG, HIGH);
              //tila = 0;
              break;
            case 3:
              //3 näytön numero
              digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
              digitalWrite(pinB, HIGH);
              digitalWrite(pinC, HIGH);
              digitalWrite(pinD, HIGH);
              digitalWrite(pinE, LOW);
              digitalWrite(pinF, LOW);
              digitalWrite(pinG, HIGH);
              //tila = 0;
              break;
            case 4:
              digitalWrite(pinA, LOW); // NOTE that HIGH denotes an active SEGMENT
              digitalWrite(pinB, HIGH);
              digitalWrite(pinC, HIGH);
              digitalWrite(pinD, LOW);
              digitalWrite(pinE, LOW);
              digitalWrite(pinF, HIGH);
              digitalWrite(pinG, HIGH);
              //tila = 0;
              break;
            case 5:
              digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
              digitalWrite(pinB, LOW);
              digitalWrite(pinC, HIGH);
              digitalWrite(pinD, HIGH);
              digitalWrite(pinE, LOW);
              digitalWrite(pinF, HIGH);
              digitalWrite(pinG, HIGH); 
              //tila = 0;
              break;
            case 6:
              digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
              digitalWrite(pinB, LOW);
              digitalWrite(pinC, HIGH);
              digitalWrite(pinD, HIGH);
              digitalWrite(pinE, HIGH);
              digitalWrite(pinF, HIGH);
              digitalWrite(pinG, HIGH);
              //tila = 0;
              break;
            case 7:
              digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
              digitalWrite(pinB, HIGH);
              digitalWrite(pinC, HIGH);
              digitalWrite(pinD, LOW);
              digitalWrite(pinE, LOW);
              digitalWrite(pinF, LOW);
              digitalWrite(pinG, LOW);
              //tila = 0;
              break;
            case 8:
              //numero 8
              digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
              digitalWrite(pinB, HIGH);
              digitalWrite(pinC, HIGH);
              digitalWrite(pinD, HIGH);
              digitalWrite(pinE, HIGH);
              digitalWrite(pinF, HIGH);
              digitalWrite(pinG, HIGH);
              //tila = 0;
              break;
            case 9:
              digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
              digitalWrite(pinB, HIGH);
              digitalWrite(pinC, HIGH);
              digitalWrite(pinD, HIGH);
              digitalWrite(pinE, LOW);
              digitalWrite(pinF, HIGH);
              digitalWrite(pinG, HIGH);
              //tila = 0;
              break;
          }
        }
    
        if (luku == 20){
          //numero 20
          digitalWrite(D1, HIGH);
          digitalWrite(D2, LOW); // NOTE that LOW denotes the active digit
          digitalWrite(D3, HIGH);
          digitalWrite(D4, HIGH);
          //2 näytön numero
          digitalWrite(pinA, HIGH);
          digitalWrite(pinB, HIGH); // NOTE that HIGH denotes an active SEGMENT
          digitalWrite(pinC, LOW);
          digitalWrite(pinD, HIGH);
          digitalWrite(pinE, HIGH);
          digitalWrite(pinF, LOW);
          digitalWrite(pinG, HIGH);
          delay(500);

          digitalWrite(D1, HIGH);
          digitalWrite(D2, HIGH);
          digitalWrite(D3, LOW); // NOTE that LOW denotes the active DIGIT
          digitalWrite(D4, HIGH);
          //3 näytön numero
          digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
          digitalWrite(pinB, HIGH);
          digitalWrite(pinC, HIGH);
          digitalWrite(pinD, HIGH);
          digitalWrite(pinE, HIGH);
          digitalWrite(pinF, HIGH);
          digitalWrite(pinG, LOW);
          //tila = 0;
      }
      }
    delay(100);
  }
}