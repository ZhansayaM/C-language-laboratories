/*
 ============================================================================
 Name        : Lesson.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Use a nested for loop to print out the following design:
+++++
++++*
+++**
++***
+****
*****
*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, l;
	for (i=5; i>=1;i--)
	{
		for (l=1; l<=i;l++)
		{
			printf("+");
		}
		for (j=1; j<=5-i;j++)
		{
printf ("*");
		}
		printf ("\n");
	}
	return 0;
}
