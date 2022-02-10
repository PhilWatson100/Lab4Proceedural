#include<stdio.h>
#include<stdlib.h>

void main() {
	int numElements;
	int i;
	//pointer called my array
	float* myArray;

	printf("please enter the number of elements in the array");
	scanf("%d", &numElements);

	myArray = (float*)malloc(numElements * sizeof(float));
	printf("the value of my is %d\n", myArray);

	for (i = 0; i < numElements;i++) {
		printf("please enter the value for element %d\n",i);
		scanf("%f", (myArray + i));
	}



}