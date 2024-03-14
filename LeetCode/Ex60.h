
#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>

/*The set [1, 2, 3, ..., n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order, we get the following sequence for n = 3:

"123"
"132"
"213"
"231"
"312"
"321"
Given n and k, return the kth permutation sequence.

Example 1:

Input: n = 3, k = 3
Output: "213"
Example 2:

Input: n = 4, k = 9
Output: "2314"
Example 3:

Input: n = 3, k = 1
Output: "123"*/


int s[100], n = 3;

void tipar() {
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << s[i] << " ";
	}
}

int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[i] == s[k]) {
			return 0;
		}
	}
	return 1;
}

int solutie(int k) {

	if (k == (n - 1)) {
		return 1;
	}
	else {
		return 0;
	}

}

void back(int k, int f) {

	int ct = 0;

	for (int i = 1; i <= n; i++) {
		s[k] = i;
		if (valid(k)) {
			if (solutie(k)) {
				if (ct == f) {
					tipar();
				}
				ct++;
			}
			else {
				back(k + 1,f);
			}
		}
	}

}

void solutie() {

	back(0,3);

}