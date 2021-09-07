#include "Inkplate.h"            //Include Inkplate library to the sketch

Inkplate display(INKPLATE_1BIT); // Create object on Inkplate library and set library to work in monochorme mode


void setup()
{
    display.begin();        // Init library (you should call this function ONLY ONCE)
    display.clearDisplay(); // Clear any data that may have been in (software) frame buffer.
    //(NOTE! This does not clean image on screen, it only clears it in the frame buffer inside ESP32).
    display.display(); // Clear everything that has previously been on a screen
    display.setCursor(0, 0);
    display.print("Welcome to Inkplate 6PLUS!");
    display.display(); // Write hello message
    delay(5000);       // Wait a little bit
}

void loop()
{
}