#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	system("chcp 1251");
	int x;
	double a;
	cout << "������� ����� �����" << endl;
	cin >> a;
	if (a - (int)a != 0) {
		cout << "������!" << endl;

	}
	else {
		x = (int)a % 2;
		if (x == 0) {
			cout << "����� ������" << endl;
		}
		else {
			cout << "����� ��������" << endl;
		}
		if (a>=-2 && a<=2) {
		   cout << "����� �������" << endl;
		}
		for (int i = 2; i < abs(a); i++) {
			x = (int)a % i;
			if (x == 0) {
				cout << "����� ���������" << endl;
				break;
			}
			if (i == abs(a) - 1) {
				cout << "����� �������" << endl;

			}
		}
	}
	system("pause");
	return 0;
}
