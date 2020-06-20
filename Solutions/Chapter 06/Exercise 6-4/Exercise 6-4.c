/*
  Name: Converting $ to Quarters, Dimes, Nickels and Pennies
  Description: Program that converts $ to quarters, dimes, nickels and pennies
  Author: Jyotirmoy Avro
  GitHub Repo: https://github.com/ItsTHEAvro/Practical-C-Programming-Solutions
*/

#include <stdio.h> /* For standard input/output operations */

char line[10]; /* input line */

/* Declaring the variables */
float money_input;     /* Input amount of money */
float money_remaining; /* Remaining money to be divided into coins */

/* Defining the numbers of quarters, dimes, nickels and pennies as 0 which will be later incremented */
int quarters = 0; /* Number of quarters */
int dimes = 0;    /* Number of dimes */
int nickels = 0;  /* Number of nickels */
int pennies = 0;  /* Number of pennies */

int main()
{
    /* Prompting the user for the amount of money*/
    printf("Enter the amount of money (less than $1.00): ");
    /* Getting user input as a string */
    fgets(line, sizeof(line), stdin);
    /* Converting the string to floating-point value */
    sscanf(line, "%f", &money_input);

    /* Assigning the input amount of money to remaining money which we will later decrement */
    money_remaining = money_input;

    while (money_remaining >= 0) /* We continue the loop till the remaining amount is 0 */
    {

        if (money_remaining >= 0.25)
        {
            ++quarters;              /* If the remaining amount is greater that the value of a quarter we increment the number of quarters */
            money_remaining -= 0.25; /* And then we decrement the value of a quarter from the remaining amount */
        }

        else if (money_remaining >= 0.10)
        {
            ++dimes;                 /* If the remaining amount is greater that the value of a dime we increment the number of dimes */
            money_remaining -= 0.10; /* And then we decrement the value of a dime from the remaining amount */
        }

        else if (money_remaining >= 0.05)
        {
            ++nickels;               /* If the remaining amount is greater that the value of a nickel we increment the number of nickels */
            money_remaining -= 0.05; /* And then we decrement the value of a nickel from the remaining amount */
        }

        else
        {
            ++pennies;               /* If the remaining amount is greater that the value of a penny we increment the number of pennies */
            money_remaining -= 0.01; /* And then we decrement the value of a penny from the remaining amount */
        }
    }

    printf("For $%f you need: \n", money_input);
    printf("%d quarter(s)\n", quarters);
    printf("%d dime(s)\n", dimes);
    printf("%d nickel(s)\n", nickels);
    printf("%d pennies(s)\n", pennies);

    return (0); /* Returning 0 means telling the machine that the program ran successfully */
}
