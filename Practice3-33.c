/*
 ============================================================================
 Name        : Practice3-33.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Grade calculator program.  Declare several variables of the appropriate types that store all of your grade information for the course, and assign each of them values.  Using the course assessment percentages from the syllabus, calculate and display your final percentage for the course (which should be a floating-point number, not an int), and output all variable values with suitable messages to the console window.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float l;
		float pa;
		float q;
		float fe;
		//float f;

		setvbuf (stdout, NULL, _IONBF, 0);
		printf ("Enter the percentages from 0 to 100, please\n");
		printf (" \n");

		printf ("Enter the percentage of the lab works\n");
		scanf ("%f", &l);

		printf ("Enter the percentage of the programming assignments\n");
			scanf ("%f", &pa);

		printf ("Enter the percentage of the quizzes\n");
				scanf ("%f", &q);

		printf ("Enter the percentage of the final exams\n");
					scanf ("%f", &fe);

		printf ("Your final grade is %.2f %%", l*0.1+pa*0.2+q*0.35+fe*0.35);
		if (l*0.1+pa*0.2+q*0.35+fe*0.35>=95) printf(" = A");
	    if (l*0.1+pa*0.2+q*0.35+fe*0.35>=90 && l*0.1+pa*0.2+q*0.35+fe*0.35<95) printf ("=A-");
	    if (l*0.1+pa*0.2+q*0.35+fe*0.35>=85 && l*0.1+pa*0.2+q*0.35+fe*0.35<90) printf ("=B+");
	    if (l*0.1+pa*0.2+q*0.35+fe*0.35>=80 && l*0.1+pa*0.2+q*0.35+fe*0.35<85) printf ("=B");
	    if (l*0.1+pa*0.2+q*0.35+fe*0.35>=75 && l*0.1+pa*0.2+q*0.35+fe*0.35<80) printf ("=B-");
		if (l*0.1+pa*0.2+q*0.35+fe*0.35>=70 && l*0.1+pa*0.2+q*0.35+fe*0.35<75) printf ("=C+");
		if (l*0.1+pa*0.2+q*0.35+fe*0.35>=65 && l*0.1+pa*0.2+q*0.35+fe*0.35<70) printf ("=C");
		if (l*0.1+pa*0.2+q*0.35+fe*0.35>=60 && l*0.1+pa*0.2+q*0.35+fe*0.35<65) printf ("=C-");
		if (l*0.1+pa*0.2+q*0.35+fe*0.35>=55 && l*0.1+pa*0.2+q*0.35+fe*0.35<60) printf ("=D+");
		if (l*0.1+pa*0.2+q*0.35+fe*0.35>=50 && l*0.1+pa*0.2+q*0.35+fe*0.35<55) printf ("=D");
		if (l*0.1+pa*0.2+q*0.35+fe*0.35>=0 && l*0.1+pa*0.2+q*0.35+fe*0.35<50) printf ("=F");
		return 0;
}
