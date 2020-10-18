#define LED1 3
#define LED2 5
#define LED3 6
#define LED4 9
#define lightSensor A0
int lightIntensity = 0;


void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

}

void loop() {
  lightIntensity = analogRead(lightSensor);
  Serial.println(lightIntensity);
  delay(50);
  
  if (lightIntensity <250) {
    digitalWrite(LED1, LOW);
  }
  else{
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
  }
  if (lightIntensity <450) {
    digitalWrite(LED2, LOW);
  }
  else{
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
  }
  if (lightIntensity <650) {
    digitalWrite(LED3, LOW);
  }
  else{
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, LOW);
  }
  if (lightIntensity <850) {
    digitalWrite(LED4, LOW);
  }
  else{
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
  }
 delay(40);
}
