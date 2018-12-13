/*
 ============================================================================
 Name        : Lesson.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Write a for loop that prints out a temperature conversion table (Celsius to Fahrenheit), for integer values from -50 C to 40 C.  You can use format strings such as %10i to make sure your integers take up a fixed number of spaces to make the formatting look nice.*/


#include <stdio.h>
#include <stdlib.h>
int main(void) {
int i;
for (i=-50; i<=40;i++)
{
	float j;
	j=i*1.8+32;
	printf ("%i C is equal to %.1f F\n", i, j);
	}
	return 0;
}
