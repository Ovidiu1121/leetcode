


#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>

/*Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.

 

Example 1:

Input: nums = [1,2,0]
Output: 3
Explanation: The numbers in the range [1,2] are all in the array.
Example 2:

Input: nums = [3,4,-1,1]
Output: 2
Explanation: 1 is in the array but 2 is missing.
Example 3:

Input: nums = [7,8,9,11,12]
Output: 1
Explanation: The smallest positive integer 1 is missing.*/

int firstMissingPositive(int v[], int d) {

    for (int i = 0; i < d; i++){
        if (v[i] > 0 && v[i] <= d){
            if (v[i] != i + 1){
                if (v[v[i] - 1] != v[i]) {
                    int aux = v[i];
                    v[i] = v[v[i] - 1];
                    v[v[i] - 1] = v[i]; 
                    i--;
                }
            }
        }
    }

    for (int i = 0; i < d; i++){
        if (v[i] != i + 1) {
            return i + 1;
        }
    }

    return d + 1;
}

void solutie() {

    int v[5] = { 7,8,9,11,12 };

    cout<<firstMissingPositive(v, 5);

}