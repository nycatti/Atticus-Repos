/*
 */

void setup() {
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    Serial.begin(9600);
    Serial.println("Start of Blink");
}

void loop() {

  blink(1, 7, 100);
  blink(1, 8, 100);
  blink(1, 9, 100);
  blink(1,8,100);
    
}

void Blink(int rep, int pin, int wait){
  for(int i = 0; i < rep; ++i){
    digitalWrite(pin, HIGH);
    delay(wait);
    digitalWrite(pin, LOW);
    delay(wait);
  }
  
}