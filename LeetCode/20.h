#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

 

Example 1:


Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:


Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]*/


void setZeroes(int a[3][3], int n, int m) {

    bool firstRowHasZero = false;
    bool firstColHasZero = false;

    for (int i = 0; i < n; i++) {
        if (a[i][0] == 0) {
            firstColHasZero = true;
            break;
        }
    }

    for (int j = 0; j < m; j++) {
        if (a[0][j] == 0) {
            firstRowHasZero = true;
            break;
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (a[i][j] == 0) {
                a[i][0] = 0;
                a[0][j] = 0;
            }
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (a[i][0] == 0 || a[0][j] == 0) {
                a[i][j] = 0;
            }
        }
    }

    if (firstRowHasZero) {
        for (int j = 0; j < m; j++) {
            a[0][j] = 0;
        }
    }

    if (firstColHasZero) {
        for (int i = 0; i < n; i++) {
            a[i][0] = 0;
        }
    }

}

void solutie() {

    int a[3][3] = { {1,1,1},{1,0,1}, {1,1,1} };

    setZeroes(a, 3, 3);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}








