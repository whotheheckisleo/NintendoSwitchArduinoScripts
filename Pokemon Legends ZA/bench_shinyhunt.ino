/**
 * bench_shinyhunt.ino
 * This code's purpose is to implement an automation for the bench shiny hunting method.
 * The method is also explained in AustinJohnPlays' top 8 shiny hunting methods video and in multiple other videos.
 * A plethora of Pokemon can be caught using this method, I would recommend looking up if your target Pokemon is available via this method.
 * 
 * The code is a remake of the bench shiny hunting method code found in this repository:
 * https://github.com/abhilesh/pokemon_z-a_macros
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

  // Briefly push left stick down to position character
  // Use a short tilt (100 ms) so the function will return and reset the stick.
  tiltLeftStick(Stick::NEUTRAL, Stick::MAX, 100);

  // Small pause to let any immediate input settle
  delay(1000);

  // Press A several times to accept dialogs/bench interaction
  // These delays follow the bench-reset pattern and can be tuned per-game/load speed.
  pushButton(Button::A, 100);
  delay(700);

  pushButton(Button::A, 100);
  delay(700);

  pushButton(Button::A, 100);
  delay(900);

  pushButton(Button::A, 100);
  delay(1100);

  pushButton(Button::A, 100);
  delay(700);

  pushButton(Button::A, 100);
  delay(1000);

  // Wait long enough for the world to reset / fast travel
  // Adjust this delay based on your game's load times.
  // For me the night to day transition took a bit less than 20 seconds while the day to night took around 24 seconds.
  // So I set it to 25 seconds to be safe.
  delay(25000);

}
