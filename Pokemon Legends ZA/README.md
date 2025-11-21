# Pokemon Legends ZA Scripts

In this file I explain the scripts in the Pokemon Legends ZA folder. The script decisions below are written in the order they were made.

## Spam A Button

A simple script that spams the A button. It's the first script I made for the Arduino because it was ridiculously simple. The main use for this script is shiny hunting in the Lyssandre Cafe, specifically two of the spawns:

- The Honedge line
- The Beldum line

There are other Pokemon you can shiny hunt via this method, this was also mentioned in AustinJohnPlay's video about shiny hunting methods (if I'm not mistaken it was the 1st one mentioned)

Can be found on [this file](spam_A_Button.ino)

## Wild Zone 3 Shiny Hunting

Another simple script, but this time we spam the left joystick down. In Wild Zone 3 there is a tower where you can use a similar method to the one in the "Spam A Button" one where we climb up and down the tower within the Wild Zone, resulting in constant respawning of the Pokemon in the area. The Pokemon you can catch this way are:

- Pancham
- Flabebe
- Pikachu
- Litleo
- Skiddo
- Espurr

You may also be able to spawn shinies in the nearby rooftop as well but I have not tested it yet. This method is also explained in AustinJohnPlay's video, it's specifically the 2nd one.

Can be found on [this file](wild_zone_3_shinyhunt.ino)

## Bench Shiny Hunting

Trying to find out how to implement the bench shiny hunting method properly, I remembered that during my research for how to use an Arduino for Nintendo Switch scripts I stumbled across [this repository](https://github.com/abhilesh/pokemon_z-a_macros) so shoutout to abhilesh. I took their bench reset method and used it as the base for my own. Unfortunately for me, I could not just use their method because it uses a different library than the one I use (which makes sense since they made this for the Raspberry Pi Pico).

The bench shiny hunting method is a very popular one and has been covered in multiple videos on YouTube (including AustinJohnPlay's video I have already mentioned). Plenty of Pokemon can be shiny hunted via this method so I would advise you to look up whether your target Pokemon can be obtained via this method and check which bench you have to use.

Can be found on [this file](bench_shinyhunt.ino). I'd advise you to calculate your loading time before using the script in case you may need adjustments.

## Wild Zone 5 Shiny Hunting

Similarly to the bench shiny hunting method, I also used the code I found in [abhilesh's repository](https://github.com/abhilesh/pokemon_z-a_macros) in order to implement this method.

Before you start using this method, you need to fly to Wild Zone 5. Along with the Wild Zone 5 spawns, you also reset some of Wild Zone 16's spawns, making it a very solid shiny hunting method.

Can be found on [this file](wild_zone_5_shinyhunt.ino)

## Wild Zone 19 Shiny Hunting

The Wild Zone 5 file was a pretty solid base to start experimenting for other wild zones. Wild Zone 19 is a good wild zone to shiny hunt since you have access to:

- Eevee
- Furfrou
- Kangaskhan
- Audino
- Drampa (Day only)
- Clefairy (Night only)

Before you start using this method, you need to fly to Wild Zone 19, just like with Wild Zone 5.

Can be found on [this file](wild_zone_19_shinyhunt.ino)

## Wild Zone 15 (Cafe Ultimo) Shiny Hunting

In the repository I mentioned earlier I also found a Wild Zone 15 shiny hunting script. Unfortunately I could not figure out whether the steps they used were actually for Wild Zone 15 or whether maybe they had a different starting place than me. Therefore I decided to make my own version of the Wild Zone 15 shiny hunting script based on my own testing.

Wild Zone 15 has access to quite a few Pokemon you may want to shiny hunt, but be aware of the differences between day and night spawns.

Before you start using this method, you need to fly to Cafe Ultimo, which is located within Wild Zone 15.

**Warning:** It is very likely that while doing the Cafe Ultimo method, you may get aggro from nearby wild Pokemon. If that happens, you cannot fly out of the area until you lose aggro (by catching or defeating the Pokemon or by running away from the area). Therefore I do not suggest this script for shiny hunting in this area. A macro controller would be much more efficient for this specific method.

Can be found on [this file](wild_zone_15_shinyhunt.ino)
