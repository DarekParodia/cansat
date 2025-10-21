#include "core.h"

#include "logger.h"

#include <Arduino.h>

namespace core {
    void init() {
#if (USE_SERIAL)
        Serial.begin(SERIAL_BAUD);
        Logger::debug("Serial initialized");
#endif
    }

    void loop() {
        Logger::info("Loop, millis: %lu", millis());
    }
} // namespace core