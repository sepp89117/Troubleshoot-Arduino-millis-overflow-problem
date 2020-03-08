unsigned long lastTrigger = 0;
int interval = 1000;

void setup() {
 Serial.begin(9600);
}

void loop() {
  if (millis() - lastTrigger >= interval || millis() < lastTrigger) {
    Serial.println("Trigger triggered");
    lastTrigger = millis();
  }
}
