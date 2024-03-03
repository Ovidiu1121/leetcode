
#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>

/*Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.*/


void maxSubArray(int v[], int d) {

	int sum, sumMax = 0;

	for (int i = 0; i < d; i++) {
		int j = i;
		sum = 0;
		while (j < d ) {
			sum += v[j];
			if (sum > sumMax) {
				sumMax = sum;
			}
			j++;
		}
	}
	cout << sumMax;

}


void solutie() {

	int v[5] = { 5,4,-1,7,8 };


	maxSubArray(v, 5);

}

