/*
 ============================================================================
 Name        : Lesson.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*TASK 1

/*Write a program that determines if a number is even or odd. 

int main(void) {
	int n, l;
	setvbuf (stdout, NULL, _IONBF, 0);
	printf ("Enter the number, please");
	scanf("%d", &n);
	l= n%2;
	if (l==0)
	{
		printf ("The given number is EVEN");
	} else {
		printf ("The given number is ODD");
	}
	return 0;
}
*/


/*//TASK3

/*. Write a program that calculates and prints the product of the odd integers from 1 to
upperbound. */


 int main (void) {
	 int n, l, sum, j, p;
	 setvbuf (stdout, NULL, _IONBF, 0);
	 printf ("Enter the number, please");
	scanf("%d", &n);
l=n%2;
sum=1;
p=n;
	 if (l==1)
	 {

		 for (; n>=1; n=n-2)
		 {
		 		sum=sum*n;
		 			 }
	 }
	 else if (l==0){
		 for (j=n-1; j>=1; j=j-2)
		 		 {
		 		 		sum=sum*j;
	 }
	 }
	 printf ("The product of all odd integers from 1 to %d is = %d", p, sum);
	 return 0;
 }
*/


//TASK 2

/* Write a program that generates a table of prime numbers*/


int main (void)
{
	int n, i, j, count;
	setvbuf (stdout, NULL,_IONBF,0);
	printf ("Enter the number, please");
scanf ("%d", &n);
	for (i=2;i<=n;i++)
	{

		for (j=2;j<=i;j++)
		{
			if (i%j==0)
			{
				break;
			}
		}
		if (i==j)
		{

			if (count%5==0){
				printf ("\n ");
			}
			printf ("%d  ", i);
			count++;
				}
		}
return 0;
}

