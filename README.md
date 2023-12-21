The Blynk app is a powerful tool for controlling various aspects of your home automation system. With Blynk, you can easily connect your devices and create a user-friendly interface to control them. It provides a range of widgets that you can use to control lights, temperature, security systems, and many other aspects of your home automation setup. You can also set up triggers and notifications to automate certain tasks or receive alerts when specific events occur. Overall, Blynk is a great app for controlling and managing your home automation system.

# Requirement
    * NODEMCU
    * LED
    * BUZZER
    * 220Ω Resistor
    * Jumper Wire
    * Breadboard

# Steps:
    * Go to File->Preferences and paste the link in the Additional Boards Manager Url text box
      http://arduino.esp8266.com/stable/package_esp8266com_index.json
    * Now, Restart the Arduino IDE go to Tools->Boards, and select Node MCU board.
    * Install the Blynk app from the Google Play Store and then sign in.
    * After that Press on and click on New Project and you will get a screen.
    * Enter the name of your project.
    * Then Select the Board as ESP8266 and then you will see below the authentication token no. If you want it in your email you can send it through email also
    * And then Finally click on the create button
    * Now you will get your dashboard screen. Just click on the topmost button "+" on the right corner to add widgets to your project.
    * In this project we add a simple button and then configure its settings as Digital D1 and D2 pin.
    * It's your choice you can either have the button set as push type or as a switch
    * Then label the Button as ON and OFF in the settings
    * Connect your Esp8266 Wifi to your PC and upload the code. by changing your wifi credentials.
    * Open the Blynk app on the Phone
    * Let it connect to the internet
    * Then you would see your dashboard with a button
    * Press the Play button on the topmost right corner of the app
    * Then, Press the Button and you will see the LED Turn ON / BUZZER Turn ON!!!:)


# Circuit Diagram
![circuit](https://github.com/om-1980/Control-using-Blynk-App/assets/111452597/d1e57ec6-6f14-4618-a604-d9eee46a2e71)
![image](https://github.com/om-1980/Control-using-Blynk-App/assets/111452597/98ec15b3-6c06-4674-ae5f-089afeb42c92)
![app_ss](https://github.com/om-1980/Control-using-Blynk-App/assets/111452597/5ecc429d-e00b-412b-ae3e-11da4a0024fa)
