/*Enhance your story generator program so that it outputs the resulting story out to a file.  The filename for the resulting story should be entered in by the user at the beginning of the program.*/


#include <stdio.h>
#include <stdlib.h>
int main(void) {
	FILE *values;
	FILE *story;
  FILE *out;
	char a, b[10];
	char output[100];
  printf("Enter the file name, please: ");
  scanf ("%s", output);
values=fopen("values.txt", "r");
story=fopen("story.txt", "r");
out=fopen(output, "w");

if (values==NULL || story==NULL || output==NULL){
	printf ("Problem opening files.");
	return 1;}

printf ("Files opened successfully.\n");

do {
a=getc(story);
if (a!='$')
	{printf ("%c", a);
  fprintf(out, "%c", a);}
else if (a=='$')
{fscanf(values, "%s", b);
      printf ("%s", b);
      fprintf(out, "%s", b);}} while (!feof(story));

fclose(values);
fclose(story);
fclose(out);
return 0;
}
