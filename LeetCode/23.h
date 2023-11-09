#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


/*Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.



Example 1:

Input: nums = [1,2,3,1], k = 3
Output: true
Example 2:

Input: nums = [1,0,1,1], k = 1
Output: true
Example 3:

Input: nums = [1,2,3,1,2,3], k = 2
Output: false*/

bool containsNearbyDuplicate(int v[],int d, int k)
{

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (v[i] == v[j] && i != j) 
            {
                if (abs(i - j) <= k)
                {
                    return true;
                }
            }
        }
    }
    return false;

}

void solutie()
{
    int v[6] = {1, 2, 3, 1, 2, 3};
    int k = 2;

    cout << containsNearbyDuplicate(v,6, k);

}







