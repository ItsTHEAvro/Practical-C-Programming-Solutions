/*
  Name: Perimeter of A Rectangle
  Description: Program that calculates the perimeter of a rectangle
  Author: Jyotirmoy Avro
  GitHub Repo: https://github.com/ItsTHEAvro/Practical-C-Programming-Solutions
*/

#include <stdio.h> //Including header file for standard I/O

/* Declaring the variables */
char line[50]; //To get the input from the user
/* Using float so that both integer and floating point values can be used*/
float height; //For the height of the rectangle
float width; //For the width of the rectangle
float perimeter; //For the perimeter of the rectangle

int main()
{
    /* Prompting the user for the height*/
    printf("Enter the Height of the Rectangle in Metre: ");
    /* Getting user input as a string */
    fgets(line, sizeof(line), stdin);
    /* Converting the string to floating-point value and saving it in radius */
    sscanf(line, "%f", &height);

    /* Prompting the user for the width*/
    printf("Enter the Width of the Rectangle in Metre: ");
    /* Getting user input as a string */
    fgets(line, sizeof(line), stdin);
    /* Converting the string to floating-point value and saving it in radius */
    sscanf(line, "%f", &width);

    /* Calculating the perimeter */
    perimeter = 2 * (height + width);

    /* Printing the perimeter*/
    printf("The Perimeter of the Rectangle is: %f\n", perimeter); //using %f because of floating point value

    return (0); //Retunrning 0 means the program ran successfully
}



