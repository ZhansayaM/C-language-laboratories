/*Create a loop that, for a positive integer n, finds the biggest integer k for which n >=2^k.  (We are essentially finding the integer log base-2 of n.)  Do not use pow, log2, or any functions from math.h to implement this!


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, i, j;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter the positive number n");
	scanf ("%d", &n);
    j=0;
	i=2;
	while (n>=i)
	{
i=2*i;
j++;
	}
	printf ("The biggest integer k for which n>=2^k is %d", j);
		return 0;
}
