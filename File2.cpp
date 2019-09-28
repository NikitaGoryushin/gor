#include <iostream>
#include <math.h>
using namespace std;
int a, b;

int NOD(int a, int b) {
	if (b == 0)
		return a;
	return NOD(b, a % b);
}

int NOK(int s, int d) {
	return s*d / NOD(s, d);
}

int main() {
	system("chcp 1251");
	int a, b;
	cout << "¬ведите число a" << endl;
	cin >> a;
	cout << "¬ведите целое число b" << endl;
	cin >> b;
	cout << "NOK" << " " << NOK(a, b) << endl;
	cout << "NOD" << " " << NOD(abs(a), abs(b)) << endl;
	system("pause");
	return 0;
}
