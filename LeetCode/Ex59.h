
#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


/*Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

Example 1:

Input: n = 3
Output: [[1,2,3],[8,9,4],[7,6,5]]
Example 2:

Input: n = 1
Output: [[1]]*/






void generateMatrix(int n) {

    int a[100][100], ct = 1, d = n * n;

    int startingrow = 0;
    int startingcol = 0;
    int endingrow = n - 1;
    int endingcol = n - 1;

    int k = 1;

    while (ct <= d)
    {
        for (int i = startingcol; ct <= d && i <= endingcol; i++)
        {
            a[startingrow][i] = ct;
            ct++;
        }
        startingrow++;

        for (int i = startingrow; ct <= d && i <= endingrow; i++)
        {
            a[i][endingcol] = ct;
            ct++;
        }
        endingcol--;

        for (int i = endingcol; ct <= d && i >= startingcol; i--)
        {
            a[endingrow][i] = ct;
            ct++;
        }
        endingrow--;

        for (int i = endingrow; ct <= d && i >= startingrow; i--)
        {
            a[i][startingcol] = ct;
            ct++;
        }
        startingcol++;

    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

};

void solutie() {

    generateMatrix(3);

}





