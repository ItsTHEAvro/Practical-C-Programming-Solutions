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
  while (1)
  {
    /* Printing the list of units and prompting the user for a number and abbreviation */
    printf("\nEnter A Number And An Abbreviation From The Following List\n");
    printf("lb  (Pound)\n");
    printf("gal (Gallon)\n");
    printf("mi  (Mile)\n");
    printf("yd  (Yard)\n");
    printf("ft  (Foot)\n");
    printf("in  (Inch)\n");
    printf("(Enter nothing to exit)\n");
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
    /* strcmp is used to compare the strings. If they match it will return 0. */
    {
      /* We can't assign a string into char array like unit_metric = "kg" */
      /* So we are using strcpy to copy the string 'kg' character by character into the array*/
      strcpy(unit_metric, "kg");
      value_converted = value_english / 2.204623;
      printf("\n%f lb = %f %s\n", value_english, value_converted, unit_metric);
      /* Resetting every value back to 0 */
      value_english = 0;
      value_converted = 0;
      /* Clearing the character arrays */
      memset(unit_english, 0, sizeof unit_english);
      memset(unit_metric, 0, sizeof unit_metric);
    }
    else if (strcmp(unit_english, "gal") == 0)
    /* strcmp is used to compare the strings. If they match it will return 0. */
    {
      strcpy(unit_metric, "li");
      value_converted = value_english * 3.785411;
      printf("\n%f gal = %f %s\n", value_english, value_converted, unit_metric)
          /* Resetting every value back to 0 */;
      value_english = 0;
      value_converted = 0;
      /* Clearing the character arrays */
      memset(unit_english, 0, sizeof unit_english);
      memset(unit_metric, 0, sizeof unit_metric);
    }
    else if (strcmp(unit_english, "mi") == 0)
    /* strcmp is used to compare the strings. If they match it will return 0. */
    {
      strcpy(unit_metric, "km");
      value_converted = value_english * 1.609344;
      printf("\n%f mi = %f %s\n", value_english, value_converted, unit_metric);
      /* Resetting every value back to 0 */
      value_english = 0;
      value_converted = 0;
      /* Clearing the character arrays */
      memset(unit_english, 0, sizeof unit_english);
      memset(unit_metric, 0, sizeof unit_metric);
    }
    else if (strcmp(unit_english, "yd") == 0)
    /* strcmp is used to compare the strings. If they match it will return 0. */
    {
      strcpy(unit_metric, "m");
      value_converted = value_english * 0.9144;
      printf("\n%f yd = %f %s\n", value_english, value_converted, unit_metric);
      /* Resetting every value back to 0 */
      value_english = 0;
      value_converted = 0;
      /* Clearing the character arrays */
      memset(unit_english, 0, sizeof unit_english);
      memset(unit_metric, 0, sizeof unit_metric);
    }
    else if (strcmp(unit_english, "ft") == 0)
    /* strcmp is used to compare the strings. If they match it will return 0. */
    {
      strcpy(unit_metric, "cm");
      value_converted = value_english * 30.48;
      printf("\n%f ft = %f %s\n", value_english, value_converted, unit_metric);
      /* Resetting every value back to 0 */
      value_english = 0;
      value_converted = 0;
      /* Clearing the character arrays */
      memset(unit_english, 0, sizeof unit_english);
      memset(unit_metric, 0, sizeof unit_metric);
    }
    else if (strcmp(unit_english, "in") == 0)
    /* strcmp is used to compare the strings. If they match it will return 0. */
    {
      strcpy(unit_metric, "cm");
      value_converted = value_english * 2.54;
      printf("\n%f in = %f %s\n", value_english, value_converted, unit_metric);
      /* Resetting every value back to 0 */
      value_english = 0;
      value_converted = 0;
      /* Clearing the character arrays */
      memset(unit_english, 0, sizeof unit_english);
      memset(unit_metric, 0, sizeof unit_metric);
    }
    else if (value_english == 0 )
    {
      printf("\nExiting Program...\n");
      break;
    }
    else
    {
      printf("\nInvalid Unit!\nExiting program...\n");
    }
  }

  return (0); /* Returning 0 means telling the machine that the program ran successfully */
}
