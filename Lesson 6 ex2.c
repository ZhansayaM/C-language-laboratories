/*
 ============================================================================
 Name        : Lesson.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Print out the numbers 2, 4, 8, 16, 32, …, 65536, where each number is twice the value of the previous.  Hint:  use the iterator of the loop to count the 16 iterations, but use a separate variable to keep track of the number to be printed each iteration.*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i=2;
	for (i=2; i<=65536; i=i*2)
	{
		printf ("%i\n", i);
	}
	return 0;
}
