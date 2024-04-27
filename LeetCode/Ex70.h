
#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


/*You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?*/

int climbStairs(int n) {

    if (n == 0 || n == 1) {
        return 1;
    }
    return climbStairs(n - 1) + climbStairs(n - 2);
}

void solutie() {

    cout << climbStairs(3);

}



