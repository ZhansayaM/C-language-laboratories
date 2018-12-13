/*Create a program that substitutes the words found in the file values.txt in for the ‘$’ characters found in story.txt, and prints the result out to the console window*/


#include <stdio.h>
#include <stdlib.h>
int main(void) {
	FILE *values;
	FILE *story;
	char a, b[10];
values=fopen("values.txt", "r");
story=fopen("story.txt", "r");

if (values==NULL || story==NULL){
	printf ("Problem opening files.");
	return 1;}

printf ("Files opened successfully.\n");

do {
a=getc(story);
if (a!='$')
	printf ("%c", a);
else if (a=='$')
{fscanf(values, "%s", b);
      printf ("%s", b);}} while (!feof(story));

fclose(values);
fclose(story);
return 0;
}
