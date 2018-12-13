//TASK 2
/* Define a new structure type called student which has members:

ID (a six digit student ID)
gender (the character ‘m’ or ‘f’)
Three separate members that represent the three different components of your CSCI 151 grade (doubles between 0.0 and 100.0)
finalGrade (a double between 0.0 and 100.0)

Then, write some code that declares a single student variable, and prompts the user to enter in values for the first five fields, and then uses this information to calculate and set the finalGrade.  At the end, use a printf statement that prints out the field contents of the student variable
*/


#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	int ID;
	char gender;
	double finalGrade;
	double component1, component2, component3;
} student;
int main (void){
	student t;
	printf ("Enter the student ID, please");
	scanf ("%d", &t.ID);
	printf ("Enter the student gender m for male, f for female, please");
		scanf (" %c", &t.gender);
	printf ("Enter 3 separate student grades from the CSCI 151, please [between 0.0 and 100.0]");
scanf (" %lf", &t.component1);
  scanf (" %lf", &t.component2);
  scanf (" %lf", &t.component3);

		t.finalGrade=(t.component1+t.component2+t.component3)/3;
		printf("\n\n\nThe Student ID: %d\n", t.ID);
    if (t.gender=='f')
    {
		printf ("Gender: female\n");}
    else if (t.gender=='m')
    {printf ("Gender: male\n");}
  printf ("Student grades from the CSCI 151: %.1f, %.1f, %.1f\n", t.component1, t.component2, t.component3);
	printf ("The student's final grade is equal to %.1f", t.finalGrade);
	return 0;}
