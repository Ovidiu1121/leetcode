


#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>

/*Given two integers n and k, return all possible combinations of k numbers chosen from the range [1, n].

You may return the answer in any order.*/

int s[100], a = 4, b=2;

void tipar() {
	cout << endl;
	for (int i = 0; i <= b; i++) {
		cout << s[i] << " ";
	}

}

int valid(int k) {

	if (k == 0) {
		return 0;
	}

	for (int i = 0; i < k; i++) {
		if (s[i] >= s[i+1]) {
			return 0;
		}
	}
	return 1;
}

int solutie(int k) {

	if (k == b-1) {
		return 1;
	}
	else {
		return 0;
	}
}

void back(int k) {

	for (int i = 1; i <= a; i++) {
		s[k] = i;
		if (valid(k)) {
			if (solutie(k)) {
				tipar();
			}
			else {
				back(k + 1);
			}
		}
	}

}

void solutie() {

     back(1);

}




