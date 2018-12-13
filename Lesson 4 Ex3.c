/*
 ============================================================================
 Name        : Practice4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Find the largest possible int value that can be stored by running the following code, substituting in larger and larger numbers, until you get garbage output:

printf(“%i”, 1000000);*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf ("%i", 2147483647);
	return 0;
}
 //int from -32768 to 32768
// -2.147.483.648 to 2.147.483.647
//so, the largest value that can be printed for integer is 2147483647, the numbers that are larger  than this number print a garbage.
