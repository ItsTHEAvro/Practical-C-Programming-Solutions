/*
  Name: Kilometer to Mile Converter
  Description: Program that converts kilometer to mile
  Author: Jyotirmoy Avro
  GitHub Repo: https://github.com/ItsTHEAvro/Practical-C-Programming-Solutions
*/

#include <stdio.h> //Including header file for standard I/O

/* Declaring the variables */
char line[50]; //To get the input from the user
/* Using float so that both integer and floating point values can be used*/
float kilometers_per_hour;
float miles_per_hour;

int main()
{
    /* Prompting the user for the km/h value*/
    printf("Enter the Kilometers per Hour Value: ");
    /* Getting user input as a string */
    fgets(line, sizeof(line), stdin);
    /* Converting the string to floating-point value and saving it in kilometer_per_hour */
    sscanf(line, "%f", &kilometers_per_hour);

    /* Calculating the mile_per_hour value */
    miles_per_hour = (kilometers_per_hour * 0.6213712);

    /* Printing the mile_per_hour value*/
    printf("%f kmph = %f mph\n", kilometers_per_hour, miles_per_hour); //using %f because of floating point value

    return (0); //Retunrning 0 means the program ran successfully
}




