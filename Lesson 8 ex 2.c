/*
 ============================================================================
 Name        : Lesson.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Using a loop (not the output format character %o), create a program that takes a positive integer n, and then displays the polynomial for the octal representation of that integer.   Use successive division, as demonstrated in the binary conversion example from the lesson, to do this.  For example, for n = 157, the program should output the following:

157 = + (5 * 8^0) + (3 * 8^1) + (2 * 8^2)

When this part is working properly, “surround” this code with a loop that gets the value of n from the user, and exits the loop when the value is negative.*/


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
		    s=n%8;
	        n=n/8;
	    	printf ("%d*8^%d +", s, i );
	    	i++;
	        			} while (n>0);
	return 0;
}
