// parse an (up to) 3 digit character number and return the integer that that number
// represents

#include "SoftwareSerial.h"

char one[]="1";
char fifteen[] = "15";
char two_hundred_seven[] = "207";

int parse_rgb_string( char *input )
{
  //WRITE ME!!!
}

void setup( void )
{
  Serial.begin(9600);
  
  Serial.println(parse_rgb_string(one));
  Serial.println(parse_rgb_string(fifteen));
  Serial.println(parse_rgb_string(two_hundred_seven));
}
