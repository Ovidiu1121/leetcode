#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>



void myPow(double x, int n) {

    if (n < 0) {
        x = 1 / x;
    }

    long num = labs(n);

    double pow = 1;

    while (num) {
        if (num & 1) { 
            pow *= x;
        }

        x *= x;
        num >>= 1;
    }

    cout<<pow;

}

void solutie() {

	myPow(2.1, 3);

}