/*
  Name: Centigrade to Farenheit
  Description: Program that converts centigrade values to farenheit
  Author: Jyotirmoy Avro
  GitHub Repo: https://github.com/ItsTHEAvro/Practical-C-Programming-Solutions
*/

#include <stdio.h> //Including header file for standard I/O

/* Declaring the variables */
char line[20]; //To get the input from the user
/* Using float so that both integer and floating point values can be used*/
float temperature_centigrade; //For the centigrade value
float temperature_farenheit; //For the farenheit value

int main()
{
    /* Prompting the user */
    printf("Enter the celsius value: ");
    /* Getting user input as a string */
    fgets(line, sizeof(line), stdin);
    /* Converting the string to floating-point value and saving it in temperature_celsius */
    sscanf(line, "%f", &temperature_centigrade);

    /* Calculating the value in farenheit */
    temperature_farenheit = ((9 * temperature_centigrade) / 5) + 32;

    /* Printing the farenheit value*/
    printf("%f Degree Celsius = %f Degree Farenheit\n", temperature_centigrade, temperature_farenheit); //using %f because of floating point value

    return (0); //Retunrning 0 means the program ran successfully
}

