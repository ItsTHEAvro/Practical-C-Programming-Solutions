/*
  Name: Square The Distance
  Description: Program that squares the given distance
  Author: Jyotirmoy Avro
  GitHub Repo: https://github.com/ItsTHEAvro/Practical-C-Programming-Solutions
*/

#include <stdio.h> /* For standard input/output operations */
#include <math.h>  /* For using sqrt() function */

/* Declaring the variables */
char line[50];          /* To get the input from the user */
float distance_input;   /* User input distance */
float distance_squared; /* For the squared distance value */
float distance_actual;  /* For square root of the squared */

int main()
{
  /* Prompting the user for "distance" */
  printf("Enter the Distance: ");
  /* Getting user input as a string */
  fgets(line, sizeof(line), stdin);
  /* Converting the string to floating-point value */
  sscanf(line, "%f", &distance_input);

  /* Calculating the square of the distance */
  distance_squared = (distance_input * distance_input);

  /* Calculating the square root using sqrt() function */
  distance_actual = sqrt(distance_squared);

  /* Printing results */
  printf("The square of the distance is: %f\n", distance_squared); /* using '%f' to print the floating-point value */
  printf("The actual distance is: %f\n", distance_actual);         /* using '%f' to print the floating-point value */

  return (0); /* Returning 0 means telling the machine that the program ran successfully */
}
