#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int c = 0, v = 0;

void hoarasort(double* a, int f, int l)
{
	int i = f, j = l;
	double tmp, x = a[(f + l) / 2];
	do {
		while (a[i] < x){
			i++;
			c++;
		}
		while (a[j] > x){
			j--;
			c++;
		}
		c++;
		if (i <= j)
		{
			c++;
			if (i < j)
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
			v++;
			i++;
			j--;
		}
		c++;
	} while (i <= j);
	c++;
	if (i < l)
		hoarasort(a, i, l);
	c++;
	if (f < j) 
		hoarasort(a, f, j);
}

int main() {
	setlocale(LC_ALL, "Russian");
	unsigned short int q;

	int m[2] = {0,0};
	double* w = new double[1000000];
	cout << "Введите 1 для 100 эл-тов, 2 для 1000, 3 - 10000, 4 - 100000, 5 - 1000000" << endl;
	cin >> q;
	unsigned int b = clock();
	if (q == 1) {
		for (int i = 0; i < 100; i++)
			w[i] = rand() % 1000 + 1;
		hoarasort(w, 0, 99);
		//for (int i = 0; i < 100; i++)
		//	cout << w[i] << " ";
	}
	else if (q == 2) {
		for (int i = 0; i < 1000; i++)
			w[i] = rand() % 1000 + 1;
		hoarasort(w, 0, 999);
		//for (int i = 0; i < 1000; i++)
		//	cout << w[i] << " ";
	}
	else if (q == 3) {
		for (int i = 0; i < 10000; i++)
			w[i] = rand() % 1000 + 1;
		hoarasort(w, 0, 9999);
		//for (int i = 0; i < 10000; i++)
		//	cout << w[i] << " ";
	}
	else if (q == 4) {
		for (int i = 0; i < 100000; i++)
			w[i] = rand() % 1000 + 1;
		hoarasort(w, 0, 99999);
		//for (int i = 0; i < 100000; i++)
		//	cout << w[i] << " ";
	}
	else if (q == 5) {
		for (int i = 0; i < 1000000; i++)
			w[i] = rand() % 1000 + 1;
		hoarasort(w, 0, 999999);
		//for (int i = 0; i < 1000000; i++)
		//	cout << w[i] << " ";
	}
	else {
		cout << "Введено некорректное значение" << endl << "Завершение программы" << endl;
		return 0;
	}
	unsigned int a = clock();
	cout << "runtime = " << (a - b) / 1000.0 << endl;
	cout << c << " " << v << endl;
	return 0;
}