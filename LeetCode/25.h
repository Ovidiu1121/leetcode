#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>

/* /*You are given a sorted unique integer array nums.

A range [a,b] is the set of all integers from a to b (inclusive).

Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

Each range [a,b] in the list should be output as:

"a->b" if a != b
"a" if a == b
 

Example 1:

Input: nums = [0,1,2,4,5,7]
Output: ["0->2","4->5","7"]
Explanation: The ranges are:
[0,2] --> "0->2"
[4,5] --> "4->5"
[7,7] --> "7"
Example 2:

Input: nums = [0,2,3,4,6,8,9]
Output: ["0","2->4","6","8->9"]
Explanation: The ranges are:
[0,0] --> "0"
[2,4] --> "2->4"
[6,6] --> "6"
[8,9] --> "8->9"*/


void SummaryRanges(int v[], int d)
{

    for (int i = 0; i < d - 1; i++)
    {
        int j = i;
        if (v[i] == v[i + 1] - 1)
        {
            while (j < d - 1 && v[j] == v[j + 1] - 1)
            {
                j++;
            }
           cout<<"[" << v[i] << "," << v[j] << "]";
        }
        else
        {
            cout << v[i];
        }
        i = j;
    }


}
void solutie()
{

    int v[6] = {0, 1, 2, 4, 5, 7};

    SummaryRanges(v,5);

}
















