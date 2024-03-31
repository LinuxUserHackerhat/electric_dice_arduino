
int BUTTON = A0;

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
}

void loop() {
 
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW); // NOTE that LOW denotes the active digit
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  //2 näytön numero
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW); // NOTE that HIGH denotes an active SEGMENT
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  delay(1); 

  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW); // NOTE that LOW denotes the active DIGIT
  digitalWrite(D4, HIGH);
  //3 näytön numero
  digitalWrite(pinA, HIGH); // NOTE that HIGH denotes an active SEGMENT
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  delay(1); 
}
