#pragma once
#include <iostream>

//task 1
void fillArr(int arr[], int length, int min, int max);
template <typename T>void showArr(T arr[], int size);
//task2 
int* resizeArr(int arr[], int length, int newLength);
//show array
template <typename T> void showArr(T arr[], int size) {
	std::cout << "[";
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}
