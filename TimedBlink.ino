#define interval 500
#define ledPin 9

int ledState = LOW;

unsigned long time = millis();
unsinged long preivous = 0;

void setup(){
  pinMode(ledPin, OUTPUT);
}

void loop(){
  if(time - previous > interval){
    previous = time;
    if (ledState = LOW){
      ledState = HIGH
      
    }
    else{
      ledState = LOW;
    } 
    digitalWrite(ledPin, ledState);
  }
  
}