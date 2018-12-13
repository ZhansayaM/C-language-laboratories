/*Write a program that copies the contents of an input file, and writes them to another file.  The input and output file names should be provided by the user via the console at the beginning of the program.  Hint: Copy the files, character by character.*/

#include <stdio.h>
int main (void)
{
	char input[80], output[80];
	FILE *_123, *_456;
	int ch;
	printf ("Enter the name of the first file");
	scanf ("%s", input);
	printf ("Enter the name of the second file");
	scanf ("%s", output);

	if ((_123=fopen(input, "r"))==NULL)
	{
		printf ("Can't open  %s for reading, sorry.\n", input);
		return 1;
	}

	if ((_456=fopen(output, "w"))==NULL)
	{
		printf ("Can't open %s for writing, sorry.\n", output);
		return 2;
	}

	while ((ch=getc(_123))!=EOF)
		putc (ch, _456);

	fclose(_123);
	fclose(_456);
	printf ("The initial file has been copied\n");
	return 0;
}
