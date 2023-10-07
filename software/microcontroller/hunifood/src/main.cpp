#include <Arduino.h>


int i=0;
void setup()
{
    Serial.begin( 115200 );
}

void loop()
{
    Serial.println( String( "Main HuniFood project " ) +  String( i++ ) );
    delay( 1000 );
}