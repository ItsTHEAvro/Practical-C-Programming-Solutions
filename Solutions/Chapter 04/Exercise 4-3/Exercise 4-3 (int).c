/*
  Name: Area and Perimeter of A Rectangle (Integer)
  Description: Program that comuputes the area and perimeter of a rectangle
  Author: Jyotirmoy Avro
  GitHub Repo: https://github.com/ItsTHEAvro/Practical-C-Programming-Solutions
*/

#include <stdio.h> /* For standard input/output operations */

/* Declaring the variables */
/* Using int because all of the values are integer*/
int height;    /* For the height of the rectangle */
int width;     /* For the width of the rectangle */
int area;      /* For the area of the rectangle */
int perimeter; /* For the perimeter of the rectangle */

int main()
{
  /* Defining height and width */
  height = 5; /* Height of the rectangle in inches */
  width = 3;  /* Width of the rectangle in inches */

  /* Calculating the area and perimeter */
  area = (height * width);
  perimeter = 2 * (height + width);

  /* Printing the calculated area and perimeter*/
  printf("The area of the rectangle is: %d sq. inches\n", area);        /* Using '%d' because of integer value */
  printf("The perimeter of the rectangle is: %d inches \n", perimeter); /* Using '%d' because of integer value */

  return (0); /* Returning 0 means telling the machine that the program ran successfully */
}