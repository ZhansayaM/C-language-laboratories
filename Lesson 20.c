/*//TASK 1
/*Implement a function which copies fromStr to toStr .  You can assume toStr is big enough to hold all of the needed characters.

void stringCopy(char fromStr[], char toStr[])*/

#include <stdio.h>
void stringCopy(char fromStr[], char toStr[]){
int i=0;
while (fromStr[i]!='\0'){
  toStr[i]=fromStr[i];
  printf ("%c", toStr[i]);
  i++;
}
}
int main (){
  char val[200]="Encryption and decryption";
  char val1[200];
  stringCopy(val, val1);
  return 0;
}
*/

/*
//TASK 2

/*Implement a function which checks for equality of str1 and str2.  You may not assume that these strings contain the same number of characters.

_Bool areEqual(char str1[], char str2[])*/

#include <stdio.h>
#include <stdbool.h>
_Bool areEqual(char str1[], char str2[]){
int i=0;
while(str1[i]!='\0' && str2[i]!='\0'){
if (str1[i]==str2[i]){
 i++;
 return true;
 }
else{
   return false;}
}
}
int main (){
  bool c;
  char a[]={'Z', 'H', 'A','N', '\0'};
  char b[]={'z', 'h', 'a', 'n', '\0'};
  c=areEqual(a, b);
  if (c==false)
  printf ("they're different");
  else if (c==true)
  printf ("they're same");
  return 0;
}
*/

/*
//TASK 3

/* Implement a function which reverses the string fromStr and saves the result to toStr.  You can assume toStr is big enough to hold all of the needed characters.

void reverse(char fromStr[], char toStr[])*/


#include <stdio.h>
#include <string.h>
void reverse(char fromStr[], char toStr[]){
int i=0;
int n, l;
n=strlen(fromStr);
l=n;
for (i=0;i<n;i++, --l){
toStr[l]=fromStr[i];
}
printf ("%s", toStr);
}
int main(){
  char l[100]="Reversetext or reverse text?";
  char v[100];
  reverse(l, v);
  return 0;
}
*/

//TASK 4
/*  Implement a function which concatenates str1 and str2 and saves the result to resultStr.  You can assume resultStr is big enough to hold all of the needed characters.

void concat(char str1[], char str2[], char[] resultStr)*/


#include <stdio.h>
#include <string.h>

void concat(char str1[], char str2[], char resultStr[]) {
int n,l, i=0;
while (str1[i]!='\0'){
  resultStr[i]=str1[i];
  i++;
  printf ("%c", resultStr[i]);
}
n=strlen(str1);
i=0;
while (str2[i]!='\0'){
  resultStr[n]=str2[i];
  printf("%c", resultStr[n]);
  i++;
  n++;
}

}
int main(){
  char a[100]="Crucio, Avada Kedavra, ";
  char b[100]="Protego Totalum, Expelliarmus, Imperio!";
  char c[100];
  concat(a, b, c);
  return 0;
}