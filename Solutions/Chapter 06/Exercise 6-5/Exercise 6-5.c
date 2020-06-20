/*
  Name: Leap Year Checker
  Description: Program that checks if the input year is a leap year of not 
  Author: Jyotirmoy Avro
  GitHub Repo: https://github.com/ItsTHEAvro/Practical-C-Programming-Solutions
*/

#include <stdio.h> /* For standard input/output operations */

/* Declaring the variables */
char line[10];  /* To get the input from the user */
int year_input; /* User input year */

int main()
{
    /* Prompting the user for year*/
    printf("Enter A Year: ");
    /* Getting user input as a string */
    fgets(line, sizeof(line), stdin);
    /* Converting the string to integer value */
    sscanf(line, "%d", &year_input);

    /* Conditions
        Leap year: 
          Divisible by 4 but not divisible by 100
          Divisible by 400

        Not a leap year:
          Divisible by both 4 and 100
          Not divisible by 4 or 400
    */

    /* 
    Cases for &&:
    -----------------------------------------------------------
    | (year % 4 == 0) && (year % 100 != 0)    |     Result    |
    -------------------+----------------------+----------------
    |  Divisible by 4  | Not divisible by 100 |   Leap Year   |
    -------------------+----------------------+----------------
    |  Divisible by 4  |   Divisible by 100   | Not Leap Year |
    -------------------+----------------------+----------------
    |Not divisible by 4| Not divisible by 100 | Not Leap Year |
    -------------------+----------------------+----------------
    |Not divisible by 4|   Divisible by 100   | Not Leap Year |
    -----------------------------------------------------------
    
    Cases for ||:
    ------------------------------------------------------------
    |(&& cases Result)||(year_input % 400 == 0)|  Final Result |
    -------------------+-----------------------+----------------
    |    Leap Year     |    Divisible by 400   |   Leap Year   |
    -------------------+-----------------------+----------------
    |    Leap Year     | Not Divisible by 400  |   Leap Year   |
    -------------------+-----------------------+----------------
    |   Not Leap Year  |    Divisible by 400   |   Leap Year   |
    -------------------+-----------------------+----------------
    |   Not Leap Year  | Not Divisible by 400  | Not Leap Year |
    ------------------------------------------------------------
    */

    /* Determining leap year or not */
    if (((year_input % 4 == 0) && (year_input % 100 != 0)) || (year_input % 400 == 0))
        printf("%d is a leap year!", year_input);
    else
        printf("%d is not a leap year.", year_input);

    return (0); /* Returning 0 means telling the machine that the program ran successfully */
}
