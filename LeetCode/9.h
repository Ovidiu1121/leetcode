#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


/*You are given an integer array nums. You are initially positioned at the array's first index, and each element in the
array represents your maximum jump length at that position.

Return true if you can reach the last index, or false otherwise.

Example 1:

Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
Example 2:

Input: nums = [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible 
to reach the last index.*/

bool canJump(int v[], int d) {
    //it shows at max what index can I reach.
    //initially I can only reach index 0, hence reach = 0
    int reach = 0;

    for (int idx = 0; idx < d; idx++) {
        //at every index I'll check if my reach was atleast able to 
        //reach that particular index.

        //reach >= idx -> great, carry on. Otherwise, 
        if (reach < idx) return false;

        //now as you can reach this index, it's time to update your reach
        //as at every index, you're getting a new jump length.
        reach = max(reach, idx + v[idx]);
    }

    //this means that you reached till the end of the array, wohooo!! 
    return true;

}


void solutie() {

    int v[5] = { 2,3,1,1,4 };

    cout<<canJump(v, 5);
}












