#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>

/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.*/

void FindMedianSortedArrays(int v[], int &d, int a[], int b) {

	int l = d + b;
	int j = 0;

	for (int i = d; i < l; i++) {
		v[i] = a[j];
		j++;
	}
	d = d + b;
	int k = 0;

	for (int i = 0; i < d; i++) {
		k+=v[i];
	}
	cout <<(double) k / d;
}

void solutie() {

	int v[100] = { 1,2 }, d = 2, a[100] = { 4,3 }, b = 2;

	FindMedianSortedArrays(v, d, a, b);
}









