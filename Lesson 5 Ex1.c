/*
 ============================================================================
 Name        : Lesson.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Quadratic equation.  Read in from the user three doubles, a, b, and c, which represent the coefficients of the quadratic equation, and calculate its two roots. You can find square roots by using the function call sqrt(x), where at the top of your .c file you need to #include <math.h>.  Don’t worry about imaginary roots.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	double a;
	double b;
	double c;
	double d;
	double r;
	double l;
	d=b*b-4*a*c;
//	r=(-b+sqrt(d))/(2*a);
	//		l=(-b-sqrt(d))/(2*a);
	printf ("The general formulae of the quadratic equation is ax^2+bx+c=0\n");
	setvbuf (stdout, NULL, _IONBF, 0);
	printf ("Enter the first coefficient 'a'\n");
scanf ("%lf", &a);
printf ("Enter the second coefficient 'b'\n");
scanf ("%lf", &b);
printf ("Enter the third coefficient 'c'\n");
scanf ("%lf", &c);
printf ("The roots of the given quadratic equation are x1=%.1lf and x2=%.1lf", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
	return 0;
}
