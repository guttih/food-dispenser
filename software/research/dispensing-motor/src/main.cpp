#include <Arduino.h>


int i=0;
void setup()
{
    Serial.begin( 115200 );
}

void loop()
{
    Serial.println( String( "Dispensing motor which will open the dispensing door " ) +  String( i++ ) );
    delay( 1000 );
}