#include <stdio.h>
 
// function takes value in celsius and returns value in kelvin
float celsius_to_kelvin(float c)
{
  return (c + 273.15);
}
 
int main()
{
 
  // variable of type float holds value in celsius
  float c = 50;
 
  // passing 'c' as parameter to the function
  // printing the value in kelvin
  printf("Temperature in Kelvin(K) : %0.2f",celsius_to_kelvin(c));
  return 0;
}
