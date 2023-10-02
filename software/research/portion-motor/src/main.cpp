#include <Arduino.h>


int i=0;
void setup()
{
    Serial.begin( 115200 );
}

void loop()
{
    Serial.println( String( "Portion motor research " ) +  String( i++ ) );
    delay( 1000 );
}