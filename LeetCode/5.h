#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in
the array.

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2*/

void majorityElement(int v[], int d) {

	int f[10]{}, maxim = 0;

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	int k;

	for (int i = 0; i < d; i++) {
		if (f[v[i]] > maxim) {
			maxim = f[v[i]];
			k = v[i];
		}
	}

	cout<<k;
}

void solutie() {

	int v[7] = { 2,2,1,1,1,2,2 };

	majorityElement(v, 7);

}








