#include <stdio.h>
#include <iostream>
#include <ctime>
using namespace std;

int c = 0, v = 0;

void Merge(int* A, int f, int l)
{
	int mid, start, final, j;
	int* mas = new int[1000000];
	mid = (f + l) / 2; 
	start = f;
	final = mid + 1;
	c++;
	for (j = f; j <= l; j++) {
		c++;
		if ((start <= mid) && ((final > l) || (A[start] < A[final])))
		{
			c += 3;
			mas[j] = A[start];
			v++;
			start++;
		}
		else
		{
			mas[j] = A[final];
			v++;
			final++;
		}
	}
	for (j = f; j <= l; j++) {
		c++;
		v++;
		A[j] = mas[j];
	}

	delete[]mas;
};

void MergeSort(int* A, int first, int last)
{
	{
		c++;
		if (first < last)
		{
			c++;
			MergeSort(A, first, (first + last) / 2); //сортировка левой части
			MergeSort(A, (first + last) / 2 + 1, last); //сортировка правой части
			Merge(A, first, last); //слияние двух частей
		}
	}
};
//главная функция
int main()
{
	setlocale(LC_ALL, "Rus");
	int i, n;
	int* A = new int[1000000];
	cout << "Введите 1 для 100 эл-тов, 2 для 1000, 3 - 10000, 4 - 100000, 5 - 1000000" << endl;
	cin >> n;
	unsigned int b = clock();
	if (n == 1) {
		for (int i = 0; i < 100; i++)
			A[i] = rand() % 1000 + 1;
		MergeSort(A, 0, 99);
		//for (int i = 0; i < 100; i++)
		//	cout << A[i] << " ";
	}
	else if (n == 2) {
		for (int i = 0; i < 1000; i++)
			A[i] = rand() % 1000 + 1;
		MergeSort(A, 0, 999);
		//for (int i = 0; i < 1000; i++)
		//	cout << A[i] << " ";
	}
	else if (n == 3) {
		for (int i = 0; i < 10000; i++)
			A[i] = rand() % 1000 + 1;
		MergeSort(A, 0, 9999);
		//for (int i = 0; i < 10000; i++)
		//	cout << A[i] << " ";
	}
	else if (n == 4) {
		for (int i = 0; i < 100000; i++)
			A[i] = rand() % 1000 + 1;
		MergeSort(A, 0, 99999);
		//for (int i = 0; i < 100000; i++)
		//	cout << A[i] << " ";
	}
	else if (n == 5) {
		for (int i = 0; i < 1000000; i++)
			A[i] = rand() % 1000 + 1;
		MergeSort(A, 0, 999999);
		//for (int i = 0; i < 1000000; i++)
		//	cout << A[i] << " ";
	}
	delete[]A;
	unsigned int a = clock();
	cout << "runtime = " << (a - b) / 1000.0 << endl;
	cout << c << " " << v << endl;
	return 0;
}