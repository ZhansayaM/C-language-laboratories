/*
 ============================================================================
 Name        : Practice3-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Cone properties.  Declare variables of type double that store the height and radius of the circular base of a cone, and assign them some values.  Calculate the surface area, area of the circular base, and volume of the given cone, and store these in separate variables.   You can find square roots by using the function call sqrt(x), where at the top of your .c file you need to #include <math.h>.  Output all of the variable values with suitable messages to the console window.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323846
int main(void) {
	double h;
	double r;
	double s;
	double v;
	double cs;
	setvbuf (stdout, NULL, _IONBF, 0);
	printf ("all values are in SI system\n");
	printf (" \n");
	printf("Enter the radius of the circle\n");
		scanf("%lf", &r);
		printf("Enter the height of the cone\n");
		scanf ("%lf", &h);
	s=PI*r*sqrt(pow(r,2)+powf(h, 2));
	v=PI*pow(r,2)*h*1/3;
	cs=PI*pow(r,2);

	printf("The area of the circular base is %.2f\n", cs);
	printf("The surface area of the cone is %.2f\n", s);
	printf("The volume of the cone is %.2f", v);

	return 0;
}
