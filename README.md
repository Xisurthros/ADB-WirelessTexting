# Android Debug Bridge (ADB) Texting
> This is a bare-bones cpp program to send texts using a wireless ADB connection.

### Important
> This program must be in the same location as ADB other wise it will **NOT** work.\
> Make sure you connect your phone to ADB. This program does not connect for you. (Guide on how to setup and connect can be found below.)\
> You will need to replace the Contact Names and Phone Numbers in the "data" map variable.

### Version
> This program was made with these software versions.\
> Android Debug Bridge version 1.0.41 | Version 31.0.3-7562133\
> Andoird version 12.\
> Other software versions may also work but, be aware issues may arise as ADB or Android versions change.

### Initial ADB Setup
> Enabling Developer Options
> * On your android device go to Settings > About Phone.
> * Here you will need to tap on the Build Number several(7) times.
> 
> Turning on ADB
> * Once you have enabled Developer Options head to Setting > Developer Options. This can be found near the bottom.
> * Once here you will see "USB Debugging". Click "OK" on the conformation screen that pops up.
> * Also select "Wireless Debugging".
>
> Initial Connection
> * You will need to connect your phone with a USB cable to your PC. (This is a one-time Initial connection to get the wireless adb connection set up.)
> * After doing so you will need to enable the USB Debugging prompt that will appear on your device.
> * On your computer in the folder where you have installed ADB, open Cmd. (Type cmd in the file path and hitting enter.)
> * In the Cmd window type "abd devices". (This should list all adb devices to confirm you have made a connection with your PC.)
>

### Wireless Connection
> !!! Make sure you check Initial ADB Setup before continuing with this section !!! 
> * Open cmd where you have installed ADB.
> * Type "adb tcpip 5555".
> * Find your phones LAN IP.
> * Getting IP: On your phone go to Settings > About Phone > Status > IP Address and copy the IP.
> * On your computer in Cmd type adb connect "Your_Ip_address". Replace Your_Ip_address with the IP you copied from the last step.
> * Finally, you should have wireless connection to your device.

### Links
> https://developer.android.com/studio/command-line/adb

### Future Plans
> * Get all messages.
> * Get live messages as they come in.
> * Desktop notifications when messages come in.
> * Possibly create GUI to control.