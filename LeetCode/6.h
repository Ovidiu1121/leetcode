#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


/*Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]*/


void Rotate(int v[], int d, int k) {
	int ct = 0;
	int i = 0;

	while (ct < k) {
		int aux = v[d - 1];
		for (int i = d - 1; i > 0; i--) {
			v[i] = v[i - 1];
		}
		v[0] = aux;
		ct++;
	}

	for (int i = 0; i < d; i++) {
		cout << v[i] << " ";
	}

}

void solutie() {

	int v[4] = { -1,-100,3,99 };

	Rotate(v, 4, 2);

}








