# How To Use The Scripts

In case the GBATemp guide I linked to in the Readme file disappears, I decided to include a separate Markdown file (the one you are reading now) explaining how to use the scripts.

## What You Need

- A Nintendo Switch (obviously) with a dock or adaptor capable of connecting a USB controller
- An Arduino Leonardo or a clone (the one I am using is called Haitronic Leonardo Pro Micro ATmega32U4 5V 16MHz and I got it for less than 10€)
- A PC to connect your Arduino (and of course a cable)

## Setting Up Your Environment

First of all, you need to download the Arduino IDE from the [official Arduino website](https://www.arduino.cc/en/software/). **Make sure you download the Legacy one and not the Version 2+ one.** According to the GBATemp guide, the newer one does not function properly with the library we use. Also, avoid downloading it from the Microsoft Store.

Then, go to the Boards Manager via the Tools menu and ensure that Arduino AVR 1.8.3 is installed. According to the GBATemp guide you need the 1.8.3 version specifically and anything newer will not function properly.

Then, you need to go to edit your boards.txt file (make sure to close out of your IDE first, or your changes might not be detected right away). It should be located in:

```txt
C:\Program Files (x86)\Arduino\hardware\arduino\avr\boards.txt
```

If you installed it via the Microsoft Store, then I have no idea where your boards.txt file is located.

Once you have your boards.txt open in an editor of your choice (I'd advise anything with numbered lines), you need to find and edit lines 285, 286, 311 and 312 to match the following:

```txt
Line 285: leonardo.vid.1 =0x0f0d
Line 286: leonardo.pid.1 =0x0092

Line 311: leonardo.build.vid=0x0f0d
Line 312: leonardo.build.pid=0x0092
```

Then your final step is to go to the Library Manager in your Tools menu within the Arduino IDE and install the NintendoSwitchControlLibrary by lefmarna.

Now your initial setup is complete.

## Setting Up Your Arduino

Now that your environment is set up, connect your Arduino to your PC. Make sure that in your Sketch menu you have selected both the right board and port.

Either download the scripts from this repository and open the script you want via the File menu or copy-paste the script of your choice into the already open sketch.

Then you go to the Sketch menu and press Upload.

After the upload finishes with no errors, your Arduino is ready to use. Just connect it to your Switch while in game and with no other controller connected.
