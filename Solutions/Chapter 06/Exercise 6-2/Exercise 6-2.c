/*
  Name: Grading
  Description: Program that prints the letter associated with input numeric grade 
  Author: Jyotirmoy Avro
  GitHub Repo: https://github.com/ItsTHEAvro/Practical-C-Programming-Solutions
*/

#include <stdio.h> /* For standard input/output operations */

/* Declaring the variables */
char line[10];       /* To get the input from the user */
float grade_numeric; /* User input numeric grades */
char grade_letter;   /* For letter grade */

int main()
{
    /* Prompting the user for numeric grade*/
    printf("Enter Numeric Grade: ");
    /* Getting user input as a string */
    fgets(line, sizeof(line), stdin);
    /* Converting the string to floating-point value */
    sscanf(line, "%f", &grade_numeric);

    /* Determining grade letter */
    /* REMINDER: Single quotes for single character */
    if (grade_numeric >= 0 && grade_numeric <= 60)
    {
        grade_letter = 'F';
    }
    else if (grade_numeric >= 61 && grade_numeric <= 70)
    {
        grade_letter = 'D';
    }
    else if (grade_numeric >= 71 && grade_numeric <= 80)
    {
        grade_letter = 'C';
    }
    else if (grade_numeric >= 81 && grade_numeric <= 90)
    {
        grade_letter = 'B';
    }
    else if (grade_numeric >= 91 && grade_numeric <= 100)
    {
        grade_letter = 'A';
    }

    /* Printing the grade letter */
    printf("Grade: %c\n", grade_letter); /* Using '%c' because of a single character */

    return (0); /* Returning 0 means telling the machine that the program ran successfully */
}
