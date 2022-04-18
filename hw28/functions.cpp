#include "functions.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

//task 1
void fillArr(int arr[], int length, int min, int max) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (max - min) + min;
}
//task 2
int* resizeArr(int arr[], int length, int newLength) {
	int* newArr = new int[newLength];
	for (int i = 0; i < newLength; i++)
		newArr[i] = arr[i];
	for (int i = length; i < newLength; i++)
		newArr[i] = rand() % 10 + 1;
	delete[] arr;
	arr = newArr;
	return arr;
}
