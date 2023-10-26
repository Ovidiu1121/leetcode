#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


/*Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums 
except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]*/

void produs(int v[], int d) {
	
	for (int i = 0; i < d; i++) {
		int p = 1;
		int j = 0;
		while (j < d) {
			if (j != i) {
				p *= v[j];
			}
			j++;
		}
		cout << p << " ";
	}

}

void solutie() {

	int v[5] = { -1,1,0,-3,3 };

	 produs(v,5);
}