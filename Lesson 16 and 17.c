/*
//Lesson 16. 3
/*Write a function, _Bool isPrime(int n), which indicates whether or not the given integer n is a prime number. You may assume that the user will only call the function with value n > 1.*/


#include <stdio.h>
_Bool isPrime(int n)
{int i,count=0;
_Bool flag;
for (i=1; i<=n; i++){
if  (n%i==0) {
 count++;}}
if (count==2)
{  printf ("The number is prime");}
else printf ("The number is not prime");}
int main (){
  int n;
  printf ("Enter the number, please");
  scanf ("%d", &n);
isPrime(n);
  return 0;}
*/


/*
//Lesson 16.4
/*Write a function, sumOfDigits(int n), that returns the sum of digits of the non-negative number n in its decimal representation. For n=129, for instance, the function returns the value 12, obtained as 1+2+9.*/


#include <stdio.h>

int sumOfDigits(int n){
int sum=0;
float b;
do {
b = n%10;
sum=sum+b;
n=n/10;}
while (n!=0);
return sum;}
int main (){
  int n;
  printf ("Enter the number, please");
  scanf ("%d", &n);
 int x=sumOfDigits(n);
  printf ("The sum of digits of the given number is %d", x);
  return 0;}
*/


/*
//Lesson 16.5
/*Write a function, _Bool isIdeal(int n), which indicates if the positive number n is an ideal number. A number n is ideal if it is the sum over all its divisors (except n itself). The number 28, having divisors 1, 2, 4, 7, 14, 28 is ideal because 1+2+4+7+14=28.*/

#include <stdio.h>
_Bool isIdeal(int n){
int i, sum=0;
for (i=1;i<n;i++){
  if (n%i==0)
  {sum=sum+i;}
}
if (sum==n)
{
  printf ("The number is ideal");
}
else printf ("The number is not ideal");}
int main (){
  int n;
  printf ("Enter the number, please");
  scanf ("%d", &n);
  isIdeal (n);
  return 0;
}
*/


//Lesson 17.2
/*Write a function double maxVal(int len, double arr[len][len]), which returns the maximum value stored in the two-dimensional array with dimensions len x len. */

#include <stdio.h>
double maxVal(int len, double arr[len][len])
{int i, j;
double max=0;
for (i=0; i<len; i++){
for (j=0;j<len;j++)
{if (arr[i][j]>max)
{max=arr[i][j];}}}
return max;}
int main (){
 double vals[4][4]= {{3.2,4.5,5.6,6.7},
            {7.6,8.9,9.2,10.1},
            {59.3,66.3,26.5,36.4},
            {99.8,87.6,54.6,47.5}};
 float x= maxVal(4,vals);
 printf ("The biggest number in the given array is %.1f",x);
  return 0;
}