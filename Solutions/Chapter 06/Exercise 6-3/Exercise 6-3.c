/*
  Name: Advanced Grading
  Description: Program that prints the letter and modifier associated with input numeric grade 
  Author: Jyotirmoy Avro
  GitHub Repo: https://github.com/ItsTHEAvro/Practical-C-Programming-Solutions
*/

#include <stdio.h> /* For standard input/output operations */

/* Declaring the variables */
char line[10];       /* To get the input from the user */
float grade_numeric; /* User input numeric grades */
char grade_letter;   /* For letter grade */
char modifier;       /* For + or - or <blank>*/

int main()
{
    modifier = ' '; /* Default modifier blank */
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
        grade_letter = 'F'; /* No modifier for grade F */
    }
    else if (grade_numeric >= 61 && grade_numeric <= 70)
    {
        grade_letter = 'D';

        /* Determining modifier*/
        if (grade_numeric >= 61 && grade_numeric <= 63)
        {
            modifier = '-';
        }
        else if (grade_numeric >= 68)
        {
            modifier = '+';
        }
    }
    else if (grade_numeric >= 71 && grade_numeric <= 80)
    {
        grade_letter = 'C';

        /* Determining modifier*/
        if (grade_numeric >= 71 && grade_numeric <= 73)
        {
            modifier = '-';
        }
        else if (grade_numeric >= 78)
        {
            modifier = '+';
        }
    }
    else if (grade_numeric >= 81 && grade_numeric <= 90)
    {
        grade_letter = 'B';

        /* Determining modifier*/
        if (grade_numeric >= 81 && grade_numeric <= 83)
        {
            modifier = '-';
        }
        else if (grade_numeric >= 88)
        {
            modifier = '+';
        }
    }
    else if (grade_numeric >= 91 && grade_numeric <= 100)
    {
        grade_letter = 'A';

        /* Determining modifier*/
        if (grade_numeric >= 91 && grade_numeric <= 93)
        {
            modifier = '-';
        }
        else if (grade_numeric >= 98)
        {
            modifier = '+';
        }
    }

    /* Printing the grade letter and modifier*/
    printf("Grade: %c%c\n", grade_letter, modifier); /* Using '%c' because of a single character */

    return (0); /* Returning 0 means telling the machine that the program ran successfully */
}
