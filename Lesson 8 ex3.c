/*
 ============================================================================
 Name        : Lesson.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Create a modified version of the above program so that it displays the hexadecimal expansion of the number n, instead of the octal.  (In your output, all the displayed numbers should still be in decimal format.)*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, s, i;
	setvbuf (stdout, NULL, _IONBF, 0);
	printf ("Enter the integer number, please");
			scanf("%d", &n);
	printf("%d = ", n);
	i=0;
	do
			{
		    s=n%16;
	        n=n/16;
	    	printf ("%d*16^%d +", s, i );
	    	i++;
	        			} while (n>0);
	return 0;
}
