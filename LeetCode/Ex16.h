
#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>

/*Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.

 

Example 1:

Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
Example 2:

Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).
*/

int ThreeSumClosest(int v[],int d, int target) {

	int sum = v[0] + v[1] + v[2];

	for (int i = 0; i < d-2; i++) {
		int j = i+1;
		int k = d - 1;

		while ( j < k) {
			int s = v[i] + v[j] + v[k];

			if (abs(target - s) < abs(target - sum)) {
				sum = s;
			}

			if (s < target) {
				j++;
			}
			else {
				k--;
			}
		}
	}
	return sum;
}

void solutie() {

	int v[4] = { -1,2,1,-4 };

	cout<<ThreeSumClosest(v, 4, 1);

}