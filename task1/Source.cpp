#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	unsigned short int q;
	int r;
	long long v = 0, b = 0;
	int* w = new int[1000000];
	cout << "Введите 1 для 100 эл-тов, 2 для 1000, 3 - 10000, 4 - 100000, 5 - 1000000" << endl;
	cin >> q;
	unsigned int c = clock();
	//srand(time(0));
	if (q == 1) {
		for (int i = 0; i < 100; i++)
			w[i] = rand() % 1000 + 1;
		for (int j = 1; j < 100; j++) {
			int k = j;
			while (w[k] < w[k - 1]) {
				r = w[k - 1];
				w[k - 1] = w[k];
				w[k] = r;
				k--;
				v += 1;
				b += 1;
			}
			b += 1;
		}
		/*for (int g = 0; g < 100; g++)
			cout << w[g] << " "; */
	}
	else if (q == 2) {
		for (int i = 0; i < 1000; i++)
			w[i] = rand() % 1000 + 1;
		for (int j = 1; j < 1000; j++) {
			int k = j;
			while (w[k] < w[k - 1]) {
				r = w[k - 1];
				w[k - 1] = w[k];
				w[k] = r;
				k--;
				v += 1;
				b += 1;
			}
			b += 1;
		}
		/*for (int g = 0; g < 1000; g++)
			cout << w[g] << " ";*/
	}
	else if (q == 3) {
		for (int i = 0; i < 10000; i++)
			w[i] = rand() % 1000 + 1;
		for (int j = 1; j < 10000; j++) {
			int k = j;
			while (w[k] < w[k - 1]) {
				r = w[k - 1];
				w[k - 1] = w[k];
				w[k] = r;
				k--;
				v += 1;
				b += 1;
			}
			b += 1;
		}
		/*for (int g = 0; g < 10000; g++)
			cout << w[g] << " ";*/
	}
	else if (q == 4) {
		for (int i = 0; i < 100000; i++)
			w[i] = rand() % 1000 + 1;
		for (int j = 1; j < 100000; j++) {
			int k = j;
			while (w[k] < w[k - 1]) {
				r = w[k - 1];
				w[k - 1] = w[k];
				w[k] = r;
				k--;
				v += 1;
				b += 1;
			}
			b += 1;
		}
		/*for (int g = 0; g < 100000; g++)
			cout << w[g] << " ";*/
	}
	else if (q == 5) {
		for (int i = 0; i < 1000000; i++)
			w[i] = rand() % 1000 + 1;
		for (int j = 1; j < 1000000; j++) {
			int k = j;
			while (w[k] < w[k - 1]) {
				r = w[k - 1];
				w[k - 1] = w[k];
				w[k] = r;
				k--;
				v += 1;
				b += 1;
			}
			b += 1;
		}
		/*for (int g = 0; g < 1000000; g++)
			cout << w[g] << " ";*/
	}
	else {
		cout << "Введено некорректное значение" << endl << "Завершение программы" << endl;
		return 0;
	}
	unsigned int a = clock();
	cout << "runtime = " << (a - c) / 1000.0 << endl;
	cout << b << " " << v << endl;
	return 0;
}