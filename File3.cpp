#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	char str[80];
	cout << "Enter string:\n";
	cin.getline(str, 80);
	int len = strlen(str);
	int i, count = 1, line = 1;

	for (i = 0; i < len; i++) {
		if (str[i] == ' ') {
			count++;
		}
		else if (str[i] == '.') {
			count = 0;
			line++;
		}
	}
	cout << "count =" << count << " v " << line << " predlojenie";
		 system ("pause");
	return 0;

}
//	int main() {
//		setlocale(LC_ALL, "Russian");
//		char str[80];
//		cout << "Enter string:\n";
//		cin.getline(str, 80);
//		int len = strlen(str);
//		int i, count = 1, line = 1;
//
//		for (i = 0; i < len; i++) {
//			if (str[i] == ' ') {
//				atoi(str[i]) = atoi(str[i]) + 20;
//				count++;
//			}
//			else if (str[i] == '.') {
//				count = 0;
//				line++;
//			}
//		}
//		cout << "count =" << count << " v " << line << " predlojenie";
//
//		return 0;
//	}
//}
