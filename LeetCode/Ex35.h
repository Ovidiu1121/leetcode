

#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


/*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4*/

int searchInsert(int v[],int d, int target) {

	for (int i = 0; i < d; i++) {
		if (v[i] == target) {
			return i;
		}
		else if (v[i] > target) {
			return i;
		}
	}
	return d;
}

void solutie() {

	int v[4] = { 1,3,5,6 };

	cout << searchInsert(v, 4, 4);

}





