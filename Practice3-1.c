/*
 ============================================================================
 Name        : Practice3-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Measurement conversion.  Declare a variable of type double that stores a length value in meters, and assign it some value.  Declare several other variables that store this same length converted into centimeters, myriameters, inches, miles, and furlongs, and output all variable values with suitable messages to the console window.*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setvbuf (stdout, NULL, _IONBF, 0);

	printf("Enter the length in meters\n");
	double l;
	scanf ("%lf", &l);
	printf("%.2lf meters", l);
	printf("= %.2lf centimeters", l*100);
	printf("= %.5lf myriameters", l*0.0001);
	printf("= %.4lf inches", l*39,37);
	printf ("= %.4lf miles", l*0.000621371);
	printf ("= %.4lf furlongs", l*0.00497097);
	return 0;
}
