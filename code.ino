Messages
Sun 4:16 PM
You sent
unsa imo gibutang sa address
miming nga gamay dani
diri ra guro
Sun 5:17 PM
miming nga gamay dani
joker kay si jhayron ba
nag tagbo mi
angkas niya iya uyab
abtika naka down sa helmet
You sent
AHAHAHAHA yawa
miming nga gamay dani
para di makita iya nawong
HAHHAHAHAHAHHAHAHAHAH ULOL
You sent
kaluod uhlol
miming nga gamay dani
bisan naa nas atbang bh i down pa
Sun 9:51 PM
miming nga gamay dani
miming nga gamay dani
#include <Arduino.h>

const uint8_t ENA = 23;
const uint8_t IN1 = 18;
const uint8_t IN2 = 19;
const uint8_t BTN = 27;

bool lastPressed = false;

void setup() {
  Serial.begin(115200);

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(BTN, INPUT_PULLUP);   // pressed = LOW, no external resistor needed

  // Start stopped (coasting)
  digitalWrite(ENA, LOW);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  Serial.println("Ready. Hold the button to run the motor.");
}

void loop() {
  const bool pressed = (digitalRead(BTN) == LOW);

  if (pressed != lastPressed) {
    lastPressed = pressed;

    if (pressed) {
      digitalWrite(IN1, HIGH);   // forward
      digitalWrite(IN2, LOW);
      digitalWrite(ENA, HIGH);   // enable the bridge: motor runs
      Serial.println("Motor ON");
    } else {
      digitalWrite(ENA, LOW);    // bridge disabled: motor coasts
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
      Serial.println("Motor OFF (coast)");
    }
  }

  delay(20);   // also acts as a simple debounce
}
