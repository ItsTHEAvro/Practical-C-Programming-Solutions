/*
  Name: Program With Errors
  Description: Program that prints wrong outputs
  Author: Jyotirmoy Avro
  GitHub Repo: https://github.com/ItsTHEAvro/Practical-C-Programming-Solutions
*/

#include <stdio.h> /* For standard input/output operations */

int main()
{
  /* Printing a floating-point number using '%d' */
  float floating_point_number;                                              /* Declaring a float variable */
  floating_point_number = 12.34;                                            /* Defining the variable */
  printf("%d should be a floating-point number.\n", floating_point_number); /* '%f' must be used to print floating-point numbers */

  /* We can also do that in one line without using variables */
  printf("%d should be a floating-point number.\n", 12.34);

  /* Printing some blank lines */
  printf("\n\n");

  /* Printing an integer using '%f'*/
  int integer_number;                                   /* Declaring an integer variable */
  integer_number = 1234;                                /* Defining the variable */
  printf("%f should be an integer.\n", integer_number); /* '%d' must be used to print floating-point numbers */

  /* We can also do that in one line without using variables */
  printf("%f should be an integer.\n", 1234);

  /* Printing some blank lines */
  printf("\n\n");

  /* Printing a character using '%d'*/
  char character;                                    /* Declaring an character variable */
  character = 'A';                                   /* Defining the variable. Single quotes are used for single character */
  printf("%d should be a character.\n", character); /* '%c' must be used to print floating-point numbers */

  /* We can also do that in one line without using variables */
  printf("%d should be a character.\n", 'A'); /* Again, single quotes for single character */

  return (0); /* Returning 0 means telling the machine that the program ran successfully (Not correctly but the machine doesn't know that) */
}
