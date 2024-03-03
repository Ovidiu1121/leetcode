#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>



/*You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 
Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
Example 2:


Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]*/




void rotate(int a[100][100],int n, int m) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            int aux = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = aux;
        }
    }

    for (int i = 0; i < n; i++) {
        int aux = a[i][0];
        a[i][0] = a[i][n-1];
        a[i][n-1] = aux;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void solutie() {

    int a[100][100] = {
        {1, 2, 3},
        {8, 9, 4},
        {7, 6, 5}
    };

    rotate(a, 3, 3);


}