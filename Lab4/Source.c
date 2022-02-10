#include<stdio.h>
#include<stdlib.h>

//using type
typedef struct {
	char name[30];
	int age;
}studentT;

void readFloatArray(float* table, int size);
void printFloatArray(float* table, int size);

void readStudentArray(int numberofElement, studentT* table);
void printStudentArray(int numberofElement, studentT* table);

void main() {
	int numElements;
	int i;
	//pointer called myArray
	float* myArray;
	studentT* list;



	printf("please enter the number of elements in the array");
	scanf("%d", &numElements);

	myArray = (float*)malloc(numElements * sizeof(float));
	list = (studentT*)malloc(numElements * sizeof(studentT));
	

	printf("the value of my is %d\n", myArray);


	for (i = 0; i < numElements;i++) {
		printf("please enter the value for element %d\n",i);
		scanf("%f", (myArray + i));
	}

	for (i = 0; i < numElements; i++)
	{
		printf("The values at element %d is %f\n", i, *(myArray + i));
	}
	readFloatArray(myArray, numElements);
	printFloatArray(myArray, numElements);

	//notice the ampersand not on strings but for ints and floats
	for (i = 0; i < numElements; i++) {
		prinf("please enter the name for element %d\n");
		scanf("%s", (*(list + i)).name);


	//only for numbers you use the ampersand
		printf("please enter the age for element %d\n", i);
		scanf("%d",&(*(list+i)).age);
	}

	




}

void readFloatArray(float* table, int size) 
{
	int i;

	for (i = 0; i < size; i++) {
		prinf("please enter the value for the element %d\n", i);
		scanf("%f", (table +i));
	}

}
void printFloatArray(float* table, int size) 
{
	int i;

	for (i = 0; i < size; i++) {
		printf("the value at element %d is %f", *(table + i));

	}
}

void readStudentArray(int size, studentT* table)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("Please enter the student name\n");
		scanf("%s", (*(table + i)).name);
		

		printf("Please enter the student age\n");
		scanf("%d", &(table + i)->age);
		
	}

}
void printStudentArray(int size, studentT* table)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("The name is %s and the age is %d\n", (table + i)->name, (table + i)->age);
	}
}