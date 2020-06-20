/*
  Name: Print A Block E
  Description: Program that prints a block E using asterisks (*)
  Author: Jyotirmoy Avro
  GitHub Repo: https://github.com/ItsTHEAvro/Practical-C-Programming-Solutions
*/

#include <stdio.h> /* For standard input/output operations */

int main()
{
  /* Printing The Letter E */
  /* Height Of 7 Characters And Width Of 5 Characters */
  /* Using multiple printf statements */
  printf("*****\n");
  printf("*****\n");
  printf("**\n");
  printf("*****\n");
  printf("**\n");
  printf("*****\n");
  printf("*****\n");

  /* Printing some blank lines */
  printf("\n");
  printf("\n");

  /*We can also print the letter with a single printf statement */
  printf("*****\n*****\n**\n*****\n**\n*****\n*****\n");

  /*We can also print the blank lines with a single printf statement */
  printf("\n\n"); /* 2 blank lines */

  return (0); /* Returning 0 means telling the machine that the program ran successfully */
}
