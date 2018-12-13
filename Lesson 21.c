/*
/*Using fscanf and atoi, Implement some code that reads in the integers from a file, and outputs their sum to the console window.  The file may contain a combination of both integers and words separated by whitespace.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
FILE *file;
char str1 [100];
file=fopen("123.txt", "r");
while(!feof(file)){
fscanf(file, " %s", str1);
printf ("%i\n", atoi(str1));
}
	return 0;
}
*/

/*
Implement the following function which converts a string representation of a floating-point number into a double:

double strToDouble(char str[])

Your implementation should be able to properly handle strings such as:

“123456”
“-123.456”
“123.456e13”
“123.456e-13”
Any improperly formatted input strings should result in the value 0.0 being returned.

Hints and Suggestions:

Use the function strToInt above as a starting point.
Use if statements after the first loop to check for things like decimal points, e’s (for scientific notation exponents), and negative signs.
Use a separate loop to process things after a possible decimal point.
Use yet another loop to process possible exponent values after an e.
*/

#include <stdio.h>
#include <math.h>

double strToDouble(char str[]){
int i, sign=1, sign1=1, intValue, decpoint, count=0, dec, dec1;
long long int p;
//p - for power of ten
//sign - for sign of the whole number
//sign1-for sign of e
//intValue - int value of the string
//decpoint - location of the decimal point
//num1 -for numbers after e
//dec - for how much you should divide to get the dec point number
//dec1- raising to the power of 10 to get .
long double result=0, num=0, num1=0;

if (str[0]=='-'){
  sign=-1;
for (i=1;str[i]>='0' && str[i]<='9';i++){
intValue=str[i]-'0';
num=num*10+intValue;
count++;
}


if (str[i]=='.'){
decpoint=i;
i++;
for (;str[i]>='0' && str[i]<='9';i++){
intValue=str[i]-'0';
num=num*10+intValue;
count++;
}
dec=count-(decpoint-1);
dec1=pow(10,dec);
num=num/dec1;
}


if (str[i]=='e'){
  i++;
  if (str[i]=='-'){
  sign1=-1;
i++;
  for (;str[i]>='0' && str[i]<='9';i++){
intValue=str[i]-'0';
num1=num1*10+intValue;
}
num1=num1*sign1;
p=pow(10, num1);
num=num*p;
}
else {
   for (;str[i]>='0' && str[i]<='9';i++){
intValue=str[i]-'0';
num1=num1*10+intValue;
}
p=pow(10, num1);
num=num*p;
}
}

result=num*sign;}





else {
for (i=0;str[i]>='0' && str[i]<='9';i++){
intValue=str[i]-'0';
num=num*10+intValue;
count++;
}


if (str[i]=='.'){
decpoint=i;
i++;
for (;str[i]>='0' && str[i]<='9';i++){
intValue=str[i]-'0';
num=num*10+intValue;
count++;
}
dec=count-decpoint;
dec1=pow(10,dec);
num=num/dec1;
}


if (str[i]=='e'){
i++;
  if (str[i]=='-'){
  sign1=-1;
i++;
  for (;str[i]>='0' && str[i]<='9';i++){
intValue=str[i]-'0';
num1=num1*10+intValue;
}
p=pow(10, num1);

num=num/p;
}

else {
   for (;str[i]>='0' && str[i]<='9';i++){
intValue=str[i]-'0';
num1=num1*10+intValue;
}
p=pow(10, num1);
num=num*p;
}
}
result=num;}

return result;
}

int main(void) {
printf ("%lf\n", strToDouble("123456"));
printf ("%lf\n", strToDouble("-123.456"));
printf ("%lf\n", strToDouble("123.456e13"));
printf ("%lf\n", strToDouble("123.456e-13"));

// as the type of the returning variable is double, it can output only 6 digits after the decimal point
  return 0;}
