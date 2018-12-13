/*
//TASK 1
/*Initialize the 20-element integer array to the random integers and compute the sum of the
elements of the array.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
int sum=0, i, a[20];
srand(time(NULL));
for (i=0;i<20;i++)
{
	a[i]=rand()%9999;
sum=a[i]+sum;
}
printf ("The sum of the 20 elements of the array is equal to %d", sum);
	return 0;
}
*/

//TASK 2
/*Initialize the 10-element integer array to the first 10 Fibonacci numbers and calculate the
average values stored in the array*/


#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, first=0, second=1, num=0, sum=0, a[10];
	a[0]=0;
	for (i=1;i<10;i++)
	{a[i]=first+i;
				first=i;
	sum=a[i]+sum;
	}
	printf ("The average value stored in the array is %d", (sum+1)/10);
	return 0;
}
/*
//TASK 3
/*Create two the 20-element integer arrays, and initialize one to the random integers and another
to the same integers in reverse order*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{int l, a[20], b[20], i;
srand(time(NULL));

for (i=0, l=19; i<20, l>=0;i++, l--){
	a[i]=random()%20;
	printf ("Array a (%dth number): %d\n", i, a[i]);
	b[l]=a[i];
printf ("Array b (%dth number): %d\n", l, b[l]);}
	return 0;}
*/
