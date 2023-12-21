The Blynk app is a powerful tool for controlling various aspects of your home automation system. With Blynk, you can easily connect your devices and create a user-friendly interface to control them. It provides a range of widgets that you can use to control lights, temperature, security systems, and many other aspects of your home automation setup. You can also set up triggers and notifications to automate certain tasks or receive alerts when specific events occur. Overall, Blynk is a great app for controlling and managing your home automation system.

# Requirement
    * NODEMCU
    * LED
    * BUZZER
    * 220Ω Resistor
    * Jumper Wire
    * Breadboard

# Steps:
    * Go to File->Preferences and paste the link in Additional Boards Manager Url text box
      http://arduino.esp8266.com/stable/package_esp8266com_index.json
    * Now, Restart the Arduino IDE and go to Tools->Boards and select Node MCU board.
    * Install the Blynk app from google play store and then sign in.
    * After that Press on click on New Project and you will get a screen.
    * Enter the name of your project.
    * Then Select the Board as ESP8266 and then you will see below the authentication token no. If you want it in your email you can send it through email also
    * And then Finally click on to the create button
    * Now you will get your dashboard screen. Just click on the the top most button "+" on the right corner to add widgets to your project.
    * In this project we add a simple button and then configure its settings as Digital D1 and D2 pin.
    * Its your choice you can either have the button set as push type or as a switch
    * Then label the Button as ON and OFF in the settings
    * Connect your Esp8266 Wifi to your PC and upload the code. by changing your wifi credentials.
    * Open the Blynk app in the Phone
    * Let it connect to the internet
    * Then you would see your dashboard with a button
    * Press Play button on the top most right corner of the app
    * Then, Press the Button and you would see the LED Turn ON / BUZZER Turn ON!!!:)


# Circuit Diagram
