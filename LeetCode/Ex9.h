#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>

/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).



Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21*/

void Reverse(int n)
{

    int nou = 0;

    while (n != 0)
    {
        nou = nou * 10 + n % 10;
        n /= 10;
    }

    cout << nou;
}

void solutie()
{
    Reverse(120);
}
