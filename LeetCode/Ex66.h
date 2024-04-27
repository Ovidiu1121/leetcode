#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>
#include <vector>

/*You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of
the integer. The digits are ordered from most significant to least significant in left-to-right order. The large 
integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.*/

vector<int> plusOne(vector<int>& v) {

    int n = v.size();

    for (int i = n - 1; i >= 0; i--) {

        if (i == n - 1) {
            v[i]++;
        }

        if (v[i] == 10) {
            v[i] = 0;

            if (i != 0) {
                v[i - 1]++;
            }
            else {
                v.push_back(0);
                v[i] = 1;
            }
        }
    }
    return v;
}

void solutie() {

    vector<int> v = { 4,3,2,1 };
    vector<int> rezultat = plusOne(v);

    for (int i = 0; i < rezultat.size(); ++i) {
        cout << rezultat[i];
    }

}