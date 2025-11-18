/**
 * wild_zone_19_shinyhunt.ino
 * This code's purpose is to shiny hunt in the Wild Zone 19 of Pokemon Legends ZA.
 * To reach Wild Zone 19, you need to fly there from anywhere in the map.
 * This area is rather special as it contains Pokemon like Eevee, Kangaskhan, Clefairy and Furfrou, which are Pokemon you may want to catch as shinies.
 * 
 * Note: This script assumes you have already flown to Wild Zone 19.
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

  // Extra long idle
  tiltLeftStick(Stick::NEUTRAL, Stick::NEUTRAL, 10);
  delay(3000);

  // Press 'B' three times to close any open menus or dialogs
  pushButton(Button::B, 100);
  delay(500);
  pushButton(Button::B, 100);
  delay(500);
  pushButton(Button::B, 100);
  delay(1000); // Wait for menus to close

  // Open map
  pushButton(Button::PLUS, 100);
  delay(2000);

  // Reset stick
  tiltLeftStick(Stick::NEUTRAL, Stick::NEUTRAL, 10);
  delay(1000);

  // Navigate (approximate move using left stick)
  // Slight left + down to position the map cursor
  tiltLeftStick(115, Stick::MAX, 200);
  // Reset stick and small pause
  tiltLeftStick(Stick::NEUTRAL, Stick::NEUTRAL, 10);
  delay(300);

  // Select
  pushButton(Button::A, 100);
  delay(1000);

  // Confirm
  pushButton(Button::A, 100);

  // Wait for fast travel / load
  delay(10000);
}