#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


/*There are n children standing in a line. Each child is assigned a rating value given in the integer array ratings.

You are giving candies to these children subjected to the following requirements:

Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.
Return the minimum number of candies you need to have to distribute the candies to the children.

 

Example 1:

Input: ratings = [1,0,2]
Output: 5
Explanation: You can allocate to the first, second and third child with 2, 1, 2 candies respectively.
Example 2:

Input: ratings = [1,2,2]
Output: 4
Explanation: You can allocate to the first, second and third child with 1, 2, 1 candies respectively.
The third child gets 1 candy because it satisfies the above two conditions.*/

void Candy(int v[], int d) {

	int candies[3]={1, 1, 1};
	int ct = 0;

	for (int i = 1; i < d-1; i++) {
		if (v[i] > v[i + 1] || v[i] > v[i - 1]) {
			candies[i] += 1;
		}
	}
	if (v[0] > v[1]) {
		candies[0] += 1;
	}
	if (v[d - 1] > v[d - 2]) {
		candies[d - 1] += 1;
	}

	for (int i = 0; i < d; i++) {
		ct += candies[i];
	}

	cout << ct;
}

void solutie() {

	int v[3] = {1,2,2 };

	Candy(v, 3);
}






