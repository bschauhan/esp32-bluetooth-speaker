#include <Arduino.h>
#include "BluetoothA2DPSink.h"

BluetoothA2DPSink a2dp_sink;

void setup() {
    Serial.begin(115200);
    
    a2dp_sink.set_volume(100);  // Set volume (0-100%)
    a2dp_sink.start("BHARAT_SPEAKER");  // Start listening for connections
}

void loop() {
    if (Serial.available()) {
        int vol = Serial.parseInt();
        if (vol >= 0 && vol <= 100) {
            a2dp_sink.set_volume(vol);
            Serial.printf("🔊 Volume set to %d%%\n", vol);
        }
    }
}
