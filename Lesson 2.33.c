/*
 ============================================================================
 Name        : Practice33.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Create and output an ACSII art picture of your choice.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=65;
		int b=40;
		int c=41;
		int d=95;
		int e=62;
		int f=60;
		int g=34;
		int h=47;
		int i=92;
		int j=46;
		int k=94;

		printf ("   %c %c\n", d,j);
		printf ("  %c %c %c\n", b, k, e);
		printf ("  %c %c %c\n", h, c, i );
		printf (" %c %c%c%c%c\n", f, d, h, d, h);
		printf ("   %c %c\n", g, g);
		return 0;
}
