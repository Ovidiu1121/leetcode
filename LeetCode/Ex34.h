

#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


/*Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]*/


void searchRange(int v[], int d, int k) {

	int first = 0, last = 0;

	int i = 0;

	for (; i < d; i++) {
		if (v[i] == k) {
			first = i;
			break;
		}
	}
	if (i >= 0 && first == 0) {
		first = -1;
	}

	i = d-1;

	for (; i >= 0; i--) {
		if (v[i] == k) {
			last = i;
			break;
		}
	}

	if (i <= d - 1 && last == 0) {
		last = -1;
	}

	cout << "[" << first << "," << last << "]";

}

void solutie() {

	int v[6] = { 5,7,7,8,8,10 };

	searchRange(v, 6, 6);

}

