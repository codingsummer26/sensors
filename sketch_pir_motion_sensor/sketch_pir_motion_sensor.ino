#define LED_PIN 9
#define SENSOR_PIN 5

int sensorState = 0;
int stopMessageDisplay = 0;

void setup() {
  pinMode(SENSOR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);

  Serial.println("Calibrating sensor, please weight ...");
  delay(20000);

  Serial.print("Sensor activated!");
}

void loop() {
  sensorState = digitalRead(SENSOR_PIN);

  if (sensorState == HIGH) {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Motion detected ...");
    stopMessageDisplay = 1;
  }
  else {
    digitalWrite(LED_PIN, LOW);
    if (stopMessageDisplay == 1) {
      Serial.println("Motion stopped.");
      stopMessageDisplay = 0;
    }
  }

  delay(100);
}
