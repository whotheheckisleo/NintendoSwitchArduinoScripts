# Nintendo Switch Arduino Scripts

## Introduction

This repository contains scripts I have either made myself or made by others that I have personally used on my own Nintendo Switch and my Arduino Leonardo clone (a Haitronic one I got for cheap). Please note that the scripts work on the original Nintendo Switch and I do not know whether you can use them for Nintendo Switch 2 or not simply because I do not even own one.

## How to use them

The library I am using is [this one made by lefmarna](https://github.com/lefmarna/NintendoSwitchControlLibrary) so shoutout to lefmarna for making this possible.

In order to setup your Arduino, follow [this guide from GBATemp](https://gbatemp.net/threads/nintendo-switch-control-library-create-controller-macros-using-arduino-leonardo.623729/)

## Scripts currently on the repo

### Pokemon Legends ZA

#### Spam A Button

A simple script that spams the A button. It's the first script I made for the Arduino because it was ridiculously simple. The main use for this script is shiny hunting in the Lyssandre Cafe, specifically two of the spawns:

- The Honedge line
- The Beldum line

There are other Pokemon you can shiny hunt via this method, this was also mentioned in AustinJohnPlay's video about shiny hunting methods (if I'm not mistaken it was the 1st one mentioned)

Can be found on [this file](Pokemon%20Legends%20ZA/spam_A_Button.ino)

#### Wild Zone 3 Shiny Hunting

Another simple script, but this time we spam the left joystick down. In Wild Zone 3 there is a tower where you can use a similar method to the one in the "Spam A Button" one where we climb up and down the tower within the Wild Zone, resulting in constant respawning of the Pokemon in the area. The Pokemon you can catch this way are:

- Pancham
- Flabebe
- Pikachu
- Litleo
- Skiddo
- Espurr

You may also be able to spawn shinies in the nearby rooftop as well but I have not tested it yet. This method is also explained in AustinJohnPlay's video, it's specifically the 2nd one.

Can be found on [this file](Pokemon%20Legends%20ZA/wild_zone_3_shinyhunt.ino)

## Scripts I will try to do in the future

### Pokemon Legends ZA

- Auto bench shiny hunting
- Auto shiny hunting for other wild zones (most likely next target: flying to Wild Zone 5 because it also hunts for Wild Zone 16)

### Pokemon Scarlet/Violet

- Auto egg hatching
- Auto egg receive
