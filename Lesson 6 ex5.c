/*
 ============================================================================
 Name        : Lesson.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Get an integer value n, and a double value x from the user, and implement a loop which calculates xn (don’t use the pow(x, i) function for this).*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf (stdout, NULL, _IONBF, 0);
	int n, i;
	double x, l;


	printf ("Enter the value of x");
	scanf ("%lf", &x);
	printf ("Enter the value of n");
	scanf ("%i", &n);
	l=x;
	for (i=1; i<n;i++)
	{
		x=x*l;
	}
	printf ("%.2lf^%i = %.2lf", l, n, x);
	return 0;
}
