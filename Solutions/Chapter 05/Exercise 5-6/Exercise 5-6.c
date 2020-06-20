/*
  Name: Total Minutes to Hours & Minutes
  Description: Program that counts the amount of hour and minute from minutes input
  Author: Jyotirmoy Avro
  GitHub Repo: https://github.com/ItsTHEAvro/Practical-C-Programming-Solutions
*/

#include <stdio.h> /* For standard input/output operations */

/* Declaring the variables */
char line[10];     /* To get the input from the user */
int total_minutes; /* User input minutes */
int hours;         /* For hours */
int minutes;       /* For minutes*/

int main()
{
  /* Prompting the user for hour input*/
  printf("Enter Total Minutes: ");
  /* Getting user input as a string */
  fgets(line, sizeof(line), stdin);
  /* Converting the string to integer value */
  sscanf(line, "%d", &total_minutes);

  /* Calculating hours */
  hours = total_minutes / 60;
  /* Though it will return a floting-point value only the integer part will be assigned to the variable because we declared it as a integer value */

  /* Calculating minutes */
  minutes = total_minutes % 60; /* We will take the remainder of the division. */

  /* Printing hours and minutes */
  printf("%d Hour(s) and %d Minute(s)\n", hours, minutes); /* Using '%d' because of integer value */

  return (0); /* Returning 0 means telling the machine that the program ran successfully */
}
