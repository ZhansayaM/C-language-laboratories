/*
 ============================================================================
 Name        : Practice1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*For a box with dimensions l, w, and h, where you can assign any values you want to these three, compute and output the volume and surface area*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l = 59;
	int w = 45;
	int h = 2123;
	int s = l*h*w;
	int f = l*w*2+2*l*h+2*h*w;
	printf ("Volume = %i\n", s); // prints the value of the volume
	printf ("Surface Area = %i", f); // prints the value of the surface area
	return 0;
}
