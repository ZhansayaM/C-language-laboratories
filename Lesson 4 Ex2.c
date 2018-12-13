/*
 ============================================================================
 Name        : Practice4-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


/*
Write some printf statements that use format characters to do the following:

Converts the following octal values below to decimal.
010
062
05712
Converts the following decimal values below to octal.
5
40
125
1000000
Converts the following hexadecimal values below to decimal.
0x23
0x2A9
0xDECAF
Converts the following decimal values below to hexadecimal.
38
259
98765
1000000
*/



#include <stdio.h>
#include <stdlib.h>

/*int main(void) {
	unsigned int l;
	setvbuf (stdout, NULL, _IONBF, 0);
	printf ("Enter the decimal number\n");
	scanf ("%i", &l);
	printf ("The octal value of x is %o and the hexadecimal value of x is %x", l, l);

	return 0;
}
*/


int main(void) {
	setvbuf (stdout, NULL, _IONBF, 0);
	int x;
	printf ("Enter the octal number\n");
	scanf ("%o", &x);
	printf ("The decimal value of the x is %d and the hexadecimal value is %x", x, x);
	return 0;
}


/*
int main(void){
	setvbuf (stdout, NULL, _IONBF, 0);
	int x;
	printf ("Enter the hexadecimal number\n");
	scanf ("%x", &x);
	printf ("The octal value of x is %o and the decimal value is %d", x, x);
	return 0;
}
*/
