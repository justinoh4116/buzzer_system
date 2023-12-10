int led1 = 13;
int button1 = 12;
int led2 = 11;
int button2 = 10;
int val1 = 1;
int val2 = 1;
int buzzer = 9;
int lock = 0;
unsigned long lastBlink = 0;
unsigned long time = 0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);
  pinMode(button1, INPUT);  
  pinMode(led2, OUTPUT);
  pinMode(button2, INPUT);  
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  time = millis();
  val1 = digitalRead(button1);
  val2 = digitalRead(button2);
  //Serial.print(val);
  if (val1 == 0 && lock == 0) {
    lock = 1;
    digitalWrite(led1, HIGH);
    tone(buzzer, 880, 100);
    delay(100);
    tone(buzzer, 1100, 100);
    delay(100);
    tone(buzzer, 1320, 200);
  } else if (val2 == 0 && lock == 0) {
    lock = 1;
    digitalWrite(led2, HIGH);
    tone(buzzer, 586, 100);
    delay(100);
    tone(buzzer, 733, 100);
    delay(100);
    tone(buzzer, 880, 200);
  }
}
