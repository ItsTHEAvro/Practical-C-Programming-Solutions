/*
  Name: Unit Converter
  Description: Program that converts English units to metrics 
  Author: Jyotirmoy Avro
  GitHub Repo: https://github.com/ItsTHEAvro/Practical-C-Programming-Solutions
*/

#include <stdio.h>  /* For standard input/output operations */
#include <string.h> /* For using functions for string operations */

/* Declaring the variables */
char line[100];        /* To get the input from the user */
char unit_english[4];  /* User input abbreviation of English unit */
char unit_metric[4];   /* Abbreviation of corresponding Metric unit */
float value_english;   /* User input value to convert */
float value_converted; /* Cenverted value */

int main()
{
  /* Printing the list of units and prompting the user for a number and abbreviation */
  printf("Enter A Number And An Abbreviation From The Following List\n");
  printf("lb  (Pound)\n");
  printf("gal (Gallon)\n");
  printf("mi  (Mile)\n");
  printf("yd  (Yard)\n");
  printf("ft  (Foot)\n");
  printf("in  (Inch)\n");
  printf("\n: ");

  /* Getting user input as a string */
  fgets(line, sizeof(line), stdin);
  /* Converting the string to floating-point value */
  sscanf(line, "%f %s", &value_english, &unit_english);

  /* 
    kg = lb / 2.204623
    li = gal * 3.785411
    km = mi * 1.609344
    m = yd * 0.9144
    cm = ft * 30.48
    cm = in * 2.54
  */
  if (strcmp(unit_english, "lb") == 0)
  {
    /* We can't assign a string into char array like unit_metric = "kg" */
    /* So we are using strcpy to copy the string 'kg' character by character into the array*/
    strcpy(unit_metric, "kg");
    value_converted = value_english / 2.204623;
    printf("%f lb = %f %s", value_english, value_converted, unit_metric);
  }
  else if (strcmp(unit_english, "gal") == 0)
  {
    strcpy(unit_metric, "li");
    value_converted = value_english * 3.785411;
    printf("%f gal = %f %s", value_english, value_converted, unit_metric);
  }
  else if (strcmp(unit_english, "mi") == 0)
  {
    strcpy(unit_metric, "km");
    value_converted = value_english * 1.609344;
    printf("%f mi = %f %s", value_english, value_converted, unit_metric);
  }
  else if (strcmp(unit_english, "yd") == 0)
  {
    strcpy(unit_metric, "m");
    value_converted = value_english * 0.9144;
    printf("%f yd = %f %s", value_english, value_converted, unit_metric);
  }
  else if (strcmp(unit_english, "ft") == 0)
  {
    strcpy(unit_metric, "cm");
    value_converted = value_english * 30.48;
    printf("%f ft = %f %s", value_english, value_converted, unit_metric);
  }
  else if (strcmp(unit_english, "in") == 0)
  {
    strcpy(unit_metric, "cm");
    value_converted = value_english * 2.54;
    printf("%f in = %f %s", value_english, value_converted, unit_metric);
  }
  else
  {
    printf("Invalid input!");
  }

  return (0); /* Returning 0 means telling the machine that the program ran successfully */
}
