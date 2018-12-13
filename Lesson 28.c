/*Look through the starter program file SortRecords1.c and input file records.txt.  Here, main creates an array of pointers to student records, and then creates the actual records from the data read in from the file.  Implement selectionSortById and insertionSortByName, using the versions of the algorithms for int arrays shown above as a guide.  Use the function nameCompare, which returns 1 (true) if the first string comes before the second string in lexicographic order.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	int id;
	char name[12];
} student;

void selectionSortById(student *x[], int size) {
int i;
	for (i=0;i<size;i++){
		int toInsert = x[i]->id;
		char a[12];
		strcpy(a,x[i]->name);
		 int j;
		 for (j = i; j >= 0; j--) {
		 if (j == 0 || x[j-1]->id <= toInsert) {
		 x[j]->id =toInsert;
		strcpy(x[j]->name,a);
		 break;
		 } else {
		 x[j]->id = x[j - 1]->id;
		 strcpy(x[j]->name,x[j-1]->name);}}}}

_Bool nameCompare(char name1[], char name2[]) { //if 1, the name1 will go first, if 0, name 2 will go first
	int i = 0;
	do {
		if (name1[i] < name2[i]) {
			return 1;
		} else if (name1[i] > name2[i]) {
			return 0;}
		i++;
	} while (name1[i] != '\0' || name2[i] != '\0');
	return 0;}

void insertionSortByName(student *x[], int size) {
	int i,b;
		for (i=0;i<size;i++){
			int toInsert = x[i]->id;
			char a[12];
			strcpy(a,x[i]->name);
			 int j;
			 for (j = i; j >= 0; j--) {
				 if (j==0){
					 strcpy(x[j]->name,a);
					 x[j]->id =toInsert;
					 break;}
				 else{
					 b=nameCompare(x[j-1]->name,a);
					 if(b==1){
						 strcpy(x[j]->name,a);
						 					x[j]->id =toInsert;
						 			 break;
					 }
					 strcpy(x[j]->name,x[j-1]->name);
									 x[j]->id = x[j - 1]->id;
				 }}}}

void printArray(student *x[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%8i %12s \n", x[i]->id, x[i]->name);
	}
	printf("\n");
}

int main() {

	student *roster[8];

	// Opening the input file
	FILE *file = fopen("records.txt", "r");
	if (file == NULL) {
		printf("Cannot find file.");
		exit(1);
	}
	printf("File opened successfully.\n");

	// Reading the records into the roster from the file
	int i;
	for (i = 0; i < 8; i++) {
		roster[i] = malloc(sizeof(student));
		fscanf(file, "%i %s \n", &roster[i]->id, roster[i]->name);
	};


	// Printing out the roster, in the initial order
	printArray(roster, 8);

	// Sorting the array by id (hopefully)
	selectionSortById(roster, 8);

	// Printing out the roster, after sorting by id
	printArray(roster, 8);

	// Sorting the array by name (hopefully)
	insertionSortByName(roster, 8);

	// Printing out the roster, after sorting by name
	printArray(roster, 8);
	fclose(file);
	return 0;
}
