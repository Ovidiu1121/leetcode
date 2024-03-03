

#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>

/*Given an m x n matrix, return all elements of the matrix in spiral order.
* 
Example 1:

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]*/


void spiralOrder(int a[100][100], int n, int m) {

    int i1, i2, j1, j2;

    for (i1 = 0, j1 = 0, i2 = n - 1, j2 = m - 1; i1 <= i2 && j1 <= j2; i1++, j1++, i2--, j2--) {
        for (int k = j1; k <= j2; k++) {
            cout << a[i1][k] << " ";
        }
        for (int k = i1 + 1; k <= i2; k++) {
            cout << a[k][j2] << " ";
        }
        for (int k = j2 - 1; k >= j1; k--) {
            cout << a[i2][k] << " ";
        }
        for (int k = i2 - 1; k > i1; k--) {
            cout << a[k][j1] << " ";
        }
    }

}

void solutie() {

    int a[100][100] = {
       {1, 2, 3},
       {8, 9, 4},
       {7, 6, 5}
    };

    spiralOrder(a, 3, 3);


}