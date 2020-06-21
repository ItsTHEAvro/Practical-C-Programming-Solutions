/*
  Name: Weekly Pay Calculator
  Description: Program that calculates weekly pay of an employee given the number of hours and the hourly wage 
  Author: Jyotirmoy Avro
  GitHub Repo: https://github.com/ItsTHEAvro/Practical-C-Programming-Solutions
*/

#include <stdio.h> /* For standard input/output operations */

/* Declaring the variables */
char line[50];         /* To get the input from the user */
float number_of_hours; /* User input number of hours an employee worked */
float hourly_wage;     /* Hourly wage of an employee */
float weekly_pay;      /* Weekly pay of that employee */

int main()
{
    /* Prompting the user for the number of hours an employee worked*/
    printf("Enter The Number of Hours Worked: ");
    /* Getting user input as a string */
    fgets(line, sizeof(line), stdin);
    /* Converting the string to floating-point value */
    sscanf(line, "%f", &number_of_hours);

    /* Prompting the user for the hourly wage*/
    printf("Enter The Hourly Wage (In Dollars): ");
    /* Getting user input as a string */
    fgets(line, sizeof(line), stdin);
    /* Converting the string to floating-point value */
    sscanf(line, "%f", &hourly_wage);

    if (number_of_hours <= 40)
    {
        /* If the number of hours worked is less than or equal to 40 then it won't be count as overtime */
        weekly_pay = number_of_hours * hourly_wage;
        /* Printing the result */
        printf("The weekly payment for the employee is: $%f", weekly_pay); /* '%f' to print floating-point value */
    }
    else
    {
        /*  If the number of hours worked is more than 40 then we need to count the overtime*/
        float overtime = number_of_hours - 40;
        /* Calculating the normal amount of payment for 40 hours*/
        weekly_pay = 40 * hourly_wage;
        /* Calculating the payment for overtime */
        weekly_pay += overtime * (hourly_wage / 2);
        /* Printing the result */
        printf("\nThe weekly payment for the employee is: $%f", weekly_pay); /* '%f' to print floating-point value */
    }

    return (0); /* Returning 0 means telling the machine that the program ran successfully */
}
