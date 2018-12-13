/*
 ============================================================================
 Name        : Practice11.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*For a box with dimensions l, w, and h, where you can assign any values you want to these three, compute and output the volume and surface area/*


#include <stdio.h>
#include <stdlib.h>

int main(void) {
			int l;
		int w;
		int h;
		setvbuf (stdout, NULL, _IONBF, 0);
		printf ("Enter the length, please!\n");
		scanf ("%d", &l);
		//printf ("%d", l);
		printf ("Enter the width, please!\n");
				scanf ("%d", &w);
			//	printf ("%d", w);
				printf ("Enter the height, please!\n");
						scanf ("%d", &h);
				//		printf ("%d", h);

		//printf ("%d",k);
						printf ("Volume = %i\n", l*w*h); // prints the value of the volume
							printf ("Surface Area = %i", 2*l*w+2*l*h+2*h*w); // prints the value of the surface area
	return 0;
}
