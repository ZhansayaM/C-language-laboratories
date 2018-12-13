/*
 ============================================================================
 Name        : Lesson.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/* Clock output.  Read in a single integer from the user, which represents the number of seconds past midnight.  From this, calculate and output the time in the form hh:mm:ss.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	setvbuf (stdout, NULL, _IONBF, 0);
	int h;
	int m;
	int s;
	h=x/3600;
	m=(x-h*3600)/60;
	s=x-h*3600-m*60;
    printf ("Enter the number of seconds past midnight, please\n");
	scanf ("%i", &x);
	printf ("%i seconds = %i hh : %i mm : %i ss", x, h, m, s);
	return 0;
}
