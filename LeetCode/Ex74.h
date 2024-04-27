
#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


/*You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.*/



bool searchMatrix(int a[100][100],int n, int m, int target) {
   
    int i = 0;

    while (i < n)
    {
        if (target <= a[i][m - 1])
        {
            int j = 0;
            while (j < m)
            {
                if (target == a[i][j])
                    return true;
                else if (target < a[i][j])
                    return false;
                else
                    j++;
            }
            return false;
        }
        i++;
    }

    return false;
}


void solutie() {

    int a[100][100] = { {1,3,5,7},{10,11,16,20},{23,30,34,60} };
    int n = 3, m = 4, t = 13;

    cout << searchMatrix(a, n, m, t);

}








