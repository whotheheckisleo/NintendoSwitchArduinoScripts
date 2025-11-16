# Nintendo Switch Arduino Scripts

## Introduction

This repository contains scripts I have either made myself or made by others that I have personally used on my own Nintendo Switch and my Arduino Leonardo clone (a Haitronic one I got for cheap). Please note that the scripts work on the original Nintendo Switch and I do not know whether you can use them for Nintendo Switch 2 or not simply because I do not even own one.

## How to use them

The library I am using is [this one made by lefmarna](https://github.com/lefmarna/NintendoSwitchControlLibrary) so shoutout to lefmarna for making this possible.

In order to setup your Arduino, follow [this guide from GBATemp](https://gbatemp.net/threads/nintendo-switch-control-library-create-controller-macros-using-arduino-leonardo.623729/)

After setting up the Arduino IDE as the guide above says, you just use those scripts in your Arduino device.

## Scripts currently on the repo

For Pokemon Legends ZA:

- Spam A Button (for shiny hunting in the Lyssandre Cafe)
- Wild Zone 3 Shiny Hunting
- Bench Shiny Hunting
- Wild Zone 5 Shiny Hunting (also helps with Wild Zone 16 spawns)

## FAQ

Q: Does this work for Switch 2?

A: I don't know. As I already said, I do not own a Switch 2 therefore I cannot test there.

Q: Will I get banned for using these scripts?

A: Short answer - Probably not.

Long answer: I can't possibly know. There is always a risk when it comes to Nintendo. The GBATemp guide exists since 2022 and the library we use is probably even older, Nintendo would have patched it already. But since all you do is emulate a Switch-compatible controller's movements then it's very unlikely

Q: Don't those shiny hunting scripts make shinies worth less?

A: That's up to you. You are free to not use the scripts if you feel they make processes easy. Any Pokemon obtained via those scripts is 100% legit since it was caught in-game without any external device altering the Pokemon itself.

Q: Can you make this script for this game?

A: Most likely not, especially if I do not own the game. I don't know much about Arduino scripting actually. I'm just trying to find out what works for my cases and I'm also posting the scripts on GitHub in case others may find them useful.

## TO-DO List

### General

- Make a more efficient setup function for the scripts
- Experiment with delays to find the most efficient ones.

### Pokemon Legends ZA

- Auto shiny hunting for other wild zones
- Auto battle implementation for Restaurant Le Nah (helper for the 1000 battle quest)

### Pokemon Scarlet/Violet

- Auto battling in Academy Ace Tournament (requires strong sweeper)
- Auto egg hatching
- Auto egg receive
