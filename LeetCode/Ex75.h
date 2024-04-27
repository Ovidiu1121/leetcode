
#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>

/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same 
color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.*/


void sortColors(int v[], int d) {

	for (int i = 0; i < d-1; i++) {
		for (int j = i + 1; j < d; j++) {
			if (v[i] >= v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

	for (int i = 0; i < d; i++) {
		cout << v[i] << " ";
	}

}

void solutie() {

	int v[6] = { 2,0,2,1,1,0 };

	sortColors(v, 6);

}






