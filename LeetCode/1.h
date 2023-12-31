#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing
the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.
The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate
this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n
elements are set to 0 and should be ignored. nums2 has a length of n.

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
Example 2:

Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].
Example 3:

Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1..*/


void merge(int v[], int d, int a[], int b) {

	int i1 = d - 1, i2 = b - 1, i3 = d + b - 1;

	while (i1 >= 0 && i2 >= 0) {
		if (v[i1] > a[i2]) {
			v[i3] = v[i1];
			i1--;
		}
		else {
			v[i3] = a[i2];
			i2--;
		}
		i3--;
	}

	while (i2 >= 0) {
		v[i3] = a[i2];
		i2--;
		i3--;
	}

	for (int i = 0; i < d+b; i++) {
		cout << v[i] << " ";
	}
}

void solutie() {

	int v[6] = { 1,2,3,0,0,0 };
	int a[3] = { 2,5,6 };

	merge(v, 3, a, 3);
	

}



