/**
 * wild_zone_3.ino
 * This code's purpose is to shiny hunt in the Wild Zone 3 of Pokemon Legends ZA.
 * First, you climb in the tower in Wild Zone 3 and then all you need to do is keep the joystick pressed to downwards.
 * This makes your character climb down and up the tower repeatedly, causing Pokemon to respawn again and again.
 * This is the 2nd shiny hunting method described in AustinJohnPlays' top 8 shiny hunting methods video.
 * The Pokemon available in this area that you may find as shiny are:
 * ~ Pancham
 * ~ Flabebe
 * ~ Pikachu
 * ~ Litleo
 * ~ Skiddo
 * ~ Espurr
 * 
 * Note: This script assumes you have already climbed to the top of the tower in Wild Zone 3.
 * Note 2: You may also be able to find shinies in the nearby rooftop. Not tested yet.
 */


#include <NintendoSwitchControlLibrary.h>

void setup() {
  // Wait for a moment to ensure the console is ready
  delay(3000); 
  for (int i = 0; i < 10; i++) {
    // Press and release the A button to make sure the controller is found
    // Without the button press on the setup, the Switch could not find the controller
    pushButton(Button::A);
    delay(500); // small delay between presses
  }
}

void loop() {

  // Hold the joystick down to make the character climb down and up the tower
  // lx: neutral (no left/right), ly: max (down). Hold for 60000 ms (1 minute) per cycle.
  tiltLeftStick(Stick::NEUTRAL, Stick::MAX, 60000);
  delay(100); // small pause between cycles
}