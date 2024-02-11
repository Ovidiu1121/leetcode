
#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>

/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false*/


bool isValid(string s) {

	for (int i = 0; i < s.length(); i += 2) {
		if (s[i]+2 != s[i + 1]) {
			return false;
		}
	}
	return true;
}

void solutie() {

	string s = "[]{}";

	cout << isValid(s);

}