#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
// #include "index.h"  // Assuming you have the HTML content in "index.h"

#define LED_PIN D1
#define BUZZER_PIN D2

char auth[] = "zTdJ5bSJWEMxTK9_Gu9uOiHMctgPMmGd";
char ssid[] = "vivek";
char pass[] = "12345678";

BlynkTimer timer;

int LED_state = LOW;
int BUZ_state = LOW;

BLYNK_WRITE(V0) {  // Virtual pin V0 for LED control
  int value = param.asInt();
  LED_state = value;
  digitalWrite(LED_PIN, LED_state);
}

BLYNK_WRITE(V1) {  // Virtual pin V1 for Buzzer control
  int value = param.asInt();
  BUZ_state = value;
  digitalWrite(BUZZER_PIN, BUZ_state);
}

void sendSensor() {
  Blynk.virtualWrite(V2, LED_state);   // Virtual pin V2 for LED state
  Blynk.virtualWrite(V3, BUZ_state);   // Virtual pin V3 for Buzzer state
}

void setup() {
  Serial.begin(9600);

  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(LED_PIN, LED_state);
  digitalWrite(BUZZER_PIN, BUZ_state);

  Blynk.begin(auth, ssid, pass);

  // Timer for sending sensor data to Blynk app every 1/2 second
  timer.setInterval(500, sendSensor);
}

void loop() {
  Blynk.run();
  timer.run();
  Serial.print("LED Status: ");
  Serial.println(LED_state);
  Serial.print("Buzzer Status: ");
  Serial.println(BUZ_state);
}
