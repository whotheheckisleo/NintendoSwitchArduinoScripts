/**
 * wild_zone_15_shinyhunt.ino
 * This code's purpose is to shiny hunt in the Wild Zone 15 of Pokemon Legends ZA.
 * To reach Wild Zone 15, you need to fly to Cafe Ultimo from anywhere in the map.
 * Flying to Cafe Ultimo is within Wild Zone 15 and is more optimal to fly there than to fly to Wild Zone 15 directly.
 * This one is actually not based on abhilesh's code, because I could not figure out how their code worked exactly for their Wild Zone 15 script.
 * 
 * Note: This script assumes you have already flown to Cafe Ultimo in Wild Zone 15.
 * 
 * Issues:
 * - It's very easy to get aggro from a Pokemon as soon as you fly to Cafe Ultimo, in which case you cannot fly again until you escape or defeat the Pokemon.
 */


#include <NintendoSwitchControlLibrary.h>

void setup() {
  // Wait for a moment to ensure the console is ready
  delay(3000); 
  for (int i = 0; i < 10; i++) {
    // Press and release the B button to make sure the controller is found
    // Without the button press on the setup, the Switch could not find the controller
    pushButton(Button::B);
    delay(500); // small delay between presses
  }
}

void loop() {

  // Open map
  pushButton(Button::PLUS, 100);
  delay(2000);

  // Reset stick
  tiltLeftStick(Stick::NEUTRAL, Stick::NEUTRAL, 10);
  delay(1000);

  // Navigate (approximate move using left stick)
  // Left + slight up to position the map cursor
  tiltLeftStick(Stick::MIN, 115, 100);
  // Reset stick and small pause
  tiltLeftStick(Stick::NEUTRAL, Stick::NEUTRAL, 10);
  delay(300);

  // Select
  pushButton(Button::A, 100);
  delay(1000);

  // Confirm
  pushButton(Button::A, 100);

  // Small delay
  delay(500);

  // Press B once just in case we have aggroed a Pokemon, which blocks us from flying
  pushButton(Button::B, 100);

  // Wait for fast travel / load (if everything is successful)
  delay(10000);
}