#include <stdio.h>

/* print Celsius-Fahrenheit table */

int main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Celsius-Fahrenheit\n");

  celsius = lower;
  while (celsius <= upper){
    fahr = celsius * (9.0 / 5.0) + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius += step;
  }

  return 0;
}
