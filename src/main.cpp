#include <Arduino.h>
#include "board.h"

void setup()
{
    Serial.begin(9600);
    while (!Serial);

    Board::Setup();
}

void loop()
{

    Board::RFID::Open();
    Board::RFID::Authenticate();
}