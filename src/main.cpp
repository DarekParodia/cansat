#include "core/core.h"

#include <Arduino.h>

// put function declarations here:
int  myFunction(int, int);

void setup() {
    // put your setup code here, to run once:

    Serial.begin(115200);
    core::init();
}

void loop() {
    // put your main code here, to run repeatedly:
    int result = myFunction(2, 3);
    Serial.print("result: ");
    Serial.print(result);
    Serial.print(" | milis: ");
    Serial.println(millis());
    delay(1000);
    core::loop();
}

// put function definitions here:
int myFunction(int x, int y) {
    return x + y;
}