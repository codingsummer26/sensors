#define VRX_PIN A1
#define VRY_PIN A0

int xValue = 0;
int yValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  xValue = analogRead(VRX_PIN);
  yValue = analogRead(VRY_PIN);

  Serial.print("x = ");
  Serial.print(xValue);
  Serial.print(", y = ");
  Serial.println(yValue);

  delay(200);
}
