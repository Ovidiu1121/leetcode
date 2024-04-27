#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>

/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.*/

void setZeroes(int a[100][100], int n, int m) {

    int visited[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            visited[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 0) {
                for (int k = 0; k < m; k++) {
                    visited[i][k] = 0;
                }
                for (int k = 0; k < n; k++) {
                    visited[k][j] = 0;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = visited[i][j];
        }
    }
}

void solutie() {

    int a[100][100] = { {0,1,2,0},{3,4,5,2},{1,3,1,5} };

    setZeroes(a, 3, 4);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}









