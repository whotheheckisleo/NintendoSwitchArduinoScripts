/**
 * wild_zone_5_shinyhunt.ino
 * This code's purpose is to shiny hunt in the Wild Zone 5 of Pokemon Legends ZA.
 * To reach Wild Zone 5, you need to fly there from anywhere in the map.
 * Along with Wild Zone 5, you're also able to shiny hunt in the nearby Wild Zone 16 using this method (especially useful if you're looking for a shiny Froakie).
 * 
 * The code is a remake of the Wild Zone 5 shiny hunting method code found in this repository:
 * https://github.com/abhilesh/pokemon_z-a_macros
 * 
 * Note: This script assumes you have already flown to Wild Zone 5.
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
  tiltLeftStick(150, Stick::MIN, 200);
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