// By Mehul and Rachel
// for reference and inspiration - https://pimylifeup.com/arduino-light-sensor/


int greenLedPin = 2;           // Pin Green LED is connected to
int blueLedPin = 3;          // Pin blue LED is connected to
int redLedPin = 4;             // Pin Red LED is connected to

int lightSensorPin = A0;        // PIN Light Sensor is connected to
int analogValue = 0;


void setup() {
  //Set pins to outputs
  pinMode(greenLedPin, OUTPUT);
  pinMode(blueLedPin,OUTPUT);
  pinMode(redLedPin,OUTPUT);
}

void loop(){
  analogValue = analogRead(lightSensorPin);
  if(analogValue < 50){            
    digitalWrite(redLedPin, HIGH);
    Serial.print("\n red");
    Serial.print(analogValue);
  }
  else if(analogValue >= 50 && analogValue <= 100){
    digitalWrite(blueLedPin, HIGH);
    Serial.print("\n analogValue for blue");
    Serial.print(analogValue);
  }
  else{
    digitalWrite(greenLedPin, HIGH);
    Serial.print("\n green");
    Serial.print(analogValue);
  }
  delay(200);
  digitalWrite(greenLedPin, LOW);
  digitalWrite(blueLedPin, LOW);
  digitalWrite(redLedPin, LOW);
}
