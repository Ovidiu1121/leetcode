
#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique 
element appears only once. The relative order of the elements should be kept the same. Then return the number of 
unique elements in nums.
Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).*/

void removeDuplicates(int v[], int d) {

	for (int i = 0; i < d; i++) {
		if (v[i] == v[i + 1]) {
			cout << v[i] << " ";
			i++;
		}
		else {
			cout << v[i] << " ";
		}
	}

}

void solutie() {

	int v[9] = { 0,0,1,1,2,2,3,3,6 };

	removeDuplicates(v, 9);


}








