#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	system("chcp 1251");
	int x;
	double a;
	cout << "Введите целое число" << endl;
	cin >> a;
	if (a - (int)a != 0) {
		cout << "Ошибка!" << endl;

	}
	else {
		x = (int)a % 2;
		if (x == 0) {
			cout << "Число четное" << endl;
		}
		else {
			cout << "Число нечетное" << endl;
		}
		if (a>=-2 && a<=2) {
		   cout << "Число простое" << endl;
		}
		for (int i = 2; i < abs(a); i++) {
			x = (int)a % i;
			if (x == 0) {
				cout << "Число составное" << endl;
				break;
			}
			if (i == abs(a) - 1) {
				cout << "Число простое" << endl;

			}
		}
	}
	system("pause");
	return 0;
}
