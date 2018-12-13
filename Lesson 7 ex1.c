/*
 ============================================================================
 Name        : Lesson.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Write a loop that prints out the first 20 Fibonacci numbers.  Hint:  use separate variables to keep track of the values printed out from the previous two iterations.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, i, first, second, c;
	n=20;
	i=1;
	first=0;
	second=1;
	printf ("First 20 terms of Fibonacci series are:\n");
	while (i<=n)
	{
		printf ("%d\n", first);
		c=first+second;
		first=second;
		second=c;
		i++;
	}
	return EXIT_SUCCESS;
}
