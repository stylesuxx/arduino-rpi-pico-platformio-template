#include <Arduino.h>

/**
 * setup and setup1 will be called at the same time, once they finish loop and
 * loop1 will be executed. This does not have to happen at the same time.
 * eg.: If setup1 finished quicker then setup, loop1 will be called first.
 *
 * The below example initializes the serial port, waits in both setups for it
 * to be ready and then serial prints every 2 seconds from core 1 and every 4
 * seconds from core 2.
 */

// put function declarations here:
int myFunction(int, int);

bool serialInitialized = false;

void setup() {
  // put your setup code for core 1 here, to run once:
  int result = myFunction(2, 3);
  Serial.begin(115200);

  while(!Serial) {}
}

void loop() {
  // put your main code for core 1 here, to run repeatedly:
  Serial.println("Hello from Core 1");
  sleep_ms(2000);
}

void setup1() {
  // put your setup code for core 2 here, to run once:
  int result = myFunction(2, 3);

  while(!Serial) {}
}

void loop1() {
  // put your main code for core 2 here, to run repeatedly:
  Serial.println("Hello from Core 2");
  sleep_ms(4000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}
