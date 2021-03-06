/*
  Name: Area and Perimeter of A Rectangle (Float)
  Description: Program that comuputes the area and perimeter of a rectangle
  Author: Jyotirmoy Avro
  GitHub Repo: https://github.com/ItsTHEAvro/Practical-C-Programming-Solutions
*/

#include <stdio.h> /* For standard input/output operations */

/* Declaring the variables */
/* Using float because all of the values are floating-point values. */
float height;    /* For the height of the rectangle. */
float width;     /* For the width of the rectangle. */
float area;      /* For the area of the rectangle. */
float perimeter; /* For the perimeter of the rectangle. */

int main()
{
  /* Defining height and width */
  height = 2.3; /* Height of the rectangle in inches. */
  width = 6.8;  /* Width of the rectangle in inches */

  /* Calculating the area and perimeter */
  area = (height * width);
  perimeter = 2 * (height + width);

  /* Printing the calculated area and perimeter*/
  printf("The area of the rectangle is: %f sq. inches\n", area);        /* using '%f' because of floating-point value. */
  printf("The perimeter of the rectangle is: %f inches \n", perimeter); /* using '%f' because of floating-point value. */

  return (0); /* Returning 0 means telling the machine that the program ran successfully */
}
