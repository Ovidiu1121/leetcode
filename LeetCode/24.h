#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


/*Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.



Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9*/

void LongestConsecutive(int v[], int d)
{

    for (int i = 0; i < d - 1; i++)
    {
        for (int j = i + 1; j < d; j++)
        {
            if (v[i] > v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    int secventaMax = 0, secventa = 1;

    for (int i = 0; i < d - 1; i++)
    {
        int j = i;
        if (v[i] == v[i + 1] - 1)
        {
            while (v[j] == v[j + 1] - 1 && j < d - 2)
            {
                secventa++;
                j++;
            }
            if (secventa > secventaMax)
            {
                secventaMax = secventa;
            }
        }
        i = j;
    }
    cout<<secventaMax;
}

void solutie()
{

    int v[6] = {100, 4, 200, 1, 3, 2};

    LongestConsecutive(v,6);

}







