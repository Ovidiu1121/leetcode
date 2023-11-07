#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


/*Given an array of positive integers nums and a positive integer target, return the minimal length of a 
subarray
 whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

 

Example 1:

Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.
Example 2:

Input: target = 4, nums = [1,4,4]
Output: 1
Example 3:

Input: target = 11, nums = [1,1,1,1,1,1,1,1]
Output: 0*/


void minSubArrayLen(int v[], int d, int k) {

	int ct = 1, ctmin = 10000;

	for (int i = 0; i < d; i++) {
		int j = i;
		int s = 0;
		ct = 0;
		while (s<k&&j < d - 1) {
			s += v[j];
			ct++;
			j++;
			if (ct < ctmin) {
				ctmin = ct;
			}
		}
	}
	cout << ctmin;
}

void solutie() {

	int v[6] = { 2,3,1,2,4,3 };

	minSubArrayLen(v, 6, 7);

}