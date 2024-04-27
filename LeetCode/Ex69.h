
#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>



int mySqrt(int x) {
    int left = 1;
    int right = x;
    int mid = -1;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (mid == x / mid) {
            return mid;
        }
        if (mid > x / mid) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return right;
}

void solutie() {

    cout << mySqrt(8);

}




