/*
  Name: Hours & Minuts to Total Minutes
  Description: Program that counts the amount of minutes from hour and minute input
  Author: Jyotirmoy Avro
  GitHub Repo: https://github.com/ItsTHEAvro/Practical-C-Programming-Solutions
*/

#include <stdio.h> /* For standard input/output operations */

/* Declaring the variables */
char line[10];        /* To get the input from the user */
float hours;          /* For hours. (Hours can be floating-point value) */
unsigned int minutes; /* For minutes. */
int total_minutes;

int main()
{
  /* Prompting the user for hour input*/
  printf("Enter Hours: ");
  /* Getting user input as a string */
  fgets(line, sizeof(line), stdin);
  /* Converting the string to floating-point value */
  sscanf(line, "%f", &hours);

  /* Prompting the user for minutes input*/
  printf("Enter Minutes: ");
  /* Getting user input as a string */
  fgets(line, sizeof(line), stdin);
  /* Converting the string to integer value */
  sscanf(line, "%d", &minutes);

  /* Calculating total minutes */
  total_minutes = (hours * 60) + minutes;

  /* Printing total minutes */
  printf("Total = %d Minutes\n", total_minutes); /* using '%d' because of integer value */

  return (0); /* Returning 0 means telling the machine that the program ran successfully */
}
