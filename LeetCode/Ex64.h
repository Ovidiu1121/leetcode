#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>

/*Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes 
the sum of all numbers along its path.*/

int sumMin(int a[100][100], int n, int m, int i, int j, int s) {

	if (a[i][j + 1] > a[i + 1][j]) {
		return s + sumMin(a, n, m, i, j + 1, s + a[i][j]);
	}
	else if (a[i][j + 1] < a[i + 1][j]) {
		return s + sumMin(a, n, m, i + 1, j, a[i][j]);
	}
	else if (i == n-1 || j == m-1) {
		return 0;
	}

	return -1;
}


void solution() {

	int a[100][100] = { {1,3,1 }, { 1,5,1 }, { 4,2,1 }};

	cout << sumMin(a, 3, 3, 0, 0, 0);

}
