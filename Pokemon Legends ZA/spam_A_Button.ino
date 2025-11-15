/**
 * spam_A_Button.ino
 * This code's purpose is to just spam the A button as much as possible.
 * It's the first script I made for the Arduino because it was ridiculously simple.
 * The main use case in Legends ZA is for shiny hunting two of the Lyssandre Cafe spawns:
 * ~ The Honedge line
 * ~ The Beldum line
 * But there are other Pokemon you're able to shiny hunt with this script as well.
 * (if I am not mistaken it's the 1st shiny huntig method described in AustinJohnPlays' top 8 shiny hunting methods video)
 *
 * 
 * Note: Can probably be used in other games too if you have a use for a script that spams A button.
 */

#include <NintendoSwitchControlLibrary.h>

void setup() {
  // Wait for a moment to ensure the console is ready
  delay(3000); 
}

void loop() {

  // Press and release the A button
  pushButton(Button::A);

  // Adjust the delay to change the spam speed
  delay(100); // This results in A being presssed every 100 milliseconds, so 10 times per sec
}