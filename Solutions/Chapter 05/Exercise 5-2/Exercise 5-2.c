/*
  Name: Volume of A Sphere
  Description: Program that calculates the volume of a sphere
  Author: Jyotirmoy Avro
  GitHub Repo: https://github.com/ItsTHEAvro/Practical-C-Programming-Solutions
*/

#include <stdio.h> //Including header file for standard I/O

/* Declaring the variables */
char line[50]; //To get the input from the user
/* Using float so that both integer and floating point values can be used*/
float radius; //For the radius of the sphere
float volume; //For the volume of the sphere
const float PI = 3.1415927; //Using const to declare PI as a constant so that the value cannot be changed later


int main()
{
    /* Prompting the user */
    printf("Enter the radius of the sphere in metre: ");
    /* Getting user input as a string */
    fgets(line, sizeof(line), stdin);
    /* Converting the string to floating-point value and saving it in radius */
    sscanf(line, "%f", &radius);

    /* Calculating the volume */
    volume = (4 * PI * radius * radius * radius) / 3;

    /* Printing the volume*/
    printf("The volume of the sphere is = %f cubic metre\n", volume); //using %f because of floating point value

    return (0); //Retunrning 0 means the program ran successfully
}


