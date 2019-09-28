#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h >
using namespace std;
int N, maxweight;
void findans(int i, int j);
int** A = new int* [N];
for (int i = 0; i < N; i++) {
	A[i] = new int[maxweight];
};
int *weight = new int[N];
int *price = new int[N];

int main() {
	for (int i = 0; i < maxweight; i++) {
		A[0][i] = 0;
		for (int i = 0; i < N; i++)
			A[i][0] = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < maxweight; j++) {
				if (j >= weight[i]){
					A[i][j] = max(A[i - 1][j], A[i - 1][j - weight[i]] + price[i]);
					}
					else   {
						A[i][j] = A[i - 1][j];
						};
				findans(N, maxweight);
			}

			void findans(int i, int j);
				if (A[i][i] == 0)
					return


					if (A[i - i][j] == A[i][j]findans(i - 1, j));
					else {
						findans(i - 1; j - weight[i]);
					}
						cout << i;

			};

		}

	}




