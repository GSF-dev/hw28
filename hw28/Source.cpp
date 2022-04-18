#include <iostream>
#include "functions.h"
using namespace std;
//homework 28
int main() {
	setlocale(LC_ALL, "Russian");
	//Task 1
	int n, m;
	cout << "Задача 1.\nВведите длины массивов: ";
	cin >> n >> m;
	int* A = new int[n];
	int* B = new int[m];
	fillArr(A, n, 30, 41);
	fillArr(B, m, 60, 71);
	cout << "Массив А:";
	showArr(A, n);
	cout << "Массив B:";
	showArr(B, m);
	int* C = new int[n + m];
	for (int i = 0; i < n; i++)
		C[i] = A[i];
	for (int i = n; i < n + m; i++)
		C[i] = B[i-n];
	cout << "Массив C:";
	showArr(C, n + m);
	delete[] A;
	delete[] B;
	//task 2
	cout << "\nЗадача 2.\nВведите длину массива: ";
	cin >> n;
	int* arr2 = new int[n];
	fillArr(arr2, n, 20, 31);
	cout << "Изначальный массив:";
	showArr(arr2, n);
	cout << "Введите новый размер массива:";
	cin >> m;
	arr2 = resizeArr(arr2,n, m);
	cout << "Новый массив:";
	showArr(arr2, m);
	delete[] arr2;

	return 0;
}
