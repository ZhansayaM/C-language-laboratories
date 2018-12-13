/*

/*Using nested loops, create a 12 x 12 matrix for representing a multiplication table, where the i, jth element of the matrix stores the value i * j.  Use a second pair of nested loops to print out the contents of your matrix.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int i, j, a[13][13];
for (i=1; i<13;i++){
for (j=1;j<13;j++){
	a[i][j]=i*j;
}}

for (i=1; i<13;i++){
for (j=1;j<13;j++){
	printf ("%6d", a[i][j]);
}printf("\n");}
	return 0;
}
*/
/*
//TASK 2

/*Starting with the code shown above in “Multi-dimensional Arrays”, write a looping structure that will transpose the matrix a and store it in a new matrix b of dimensions C x R, and add 25 to each of its elements, and then finally print out b’s contents.*/

#include <stdio.h>
#include <stdlib.h>
int main (void) {
int R = 3, C = 4;
int a[R][C], b[C][R];
int i, j, val = 100;
printf ("The matrix a:\n\n");
for (i = 0; i < R; i++) {
 for (j = 0; j < C; j++) {
 a[i][j] = val;
 val++;
 }
}
 for (i = 0; i < R; i++) {
 for (j = 0; j < C; j++) {
 printf("%5d", a[i][j]);
 }
 printf("\n");
}

 printf ("The matrix b:\n\n");

 for (i = 0; i < C; i++) {
  for (j = 0; j < R; j++) {
  b[i][j] = val+25;
  val++;
  }
 }
  for (i = 0; i < C; i++) {
  for (j = 0; j < R; j++) {
  printf("%5d", b[i][j]);
  }
  printf("\n");
 }
 return 0;
 }

*/

//TASK 3
/*Write some code that finds the maximum element in a two-dimensional matrix, and then prints out the row and column of its location.*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{int r, c, max, f, s;
	printf("Enter the number of rows, please");
	scanf ("%d", &r);
	printf("Enter the number of columns, please");
	scanf ("%d", &c);
	int a[r][c],i, j;
	srand(time(NULL));
	for (i=0; i<r;i++)
	{for (j=0;j<c;j++)
			a[i][j]=rand()%2500;}
	  max=a[0][0];
	for (i=0; i<r;i++)
	{for (j=0;j<c;j++)
			{printf ("%5d", a[i][j]);
			  if (a[i][j]>max)
			      {max=a[i][j];
			f=i;
			s=j;}}
	printf ("\n");}
  printf ("\nThe maximum element in an array is %d and it is located in %d row and %d column", max, f+1, s+1);
	return 0;}

/*
//TASK 4

/*Write some code that first creates and initializes two 3 x 3 matrices, and then multiplies them together to get a third 3 x 3 matrix, which you print out at the end.  The formula for matrix multiplication can be found here.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{int i, sum=0,k,j, m1[3][3], m2[3][3], multiplication[3][3];
srand(time(NULL));
for (i=0; i<3; i++)
{
for (j=0;j<3;j++)
{m1[i][j]=rand()%2000;}
}

for (i=0; i<3; i++)
{
for (j=0;j<3;j++)
{m2[i][j]=rand()%2000;}
}

for (i=0; i<3; i++)
{
for (j=0;j<3;j++)
{for (k=0; k<3;k++)
{sum=sum+m1[i][k]*m2[k][j];
}
multiplication[i][j]=sum;
sum=0;
}}

for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{printf ("%5d\t", multiplication[i][j]);}
printf ("\n");}
	return 0;
}
*/
