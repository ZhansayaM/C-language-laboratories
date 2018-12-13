/*
 ============================================================================
 Name        : Practice22.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*For a circle with radius r, where you can assign any value you want to r, compute and output its circumference and area. Use the type double, and the format string %f to output them*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {

	float p=3.14;
	double r;
	setvbuf (stdout, NULL, _IONBF, 0);
	printf ("Enter the radius, please!\n");
	scanf ("%lf", &r);
	//printf ("%d",k);
	printf ("Circumference is %.2f\n", 2*p*r); // prints the circumference of the circle
	printf ("Area is %.2f", p*r*r);
	return 0;
}
