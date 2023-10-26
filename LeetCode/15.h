#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>

/*Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal 
substring
 consisting of non-space characters only.

 

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.*/


int LengthOfLastWord(char s[]) {

    int size = strlen(s) - 1;
    int x = 0;

    while (size >= 0)
    {
        if (isalpha(s[size]))
        {
            x++;
            size--;
        }
        else
        {
            if (x != 0)
                break;
            else
                size--;
        }
    }
    return x;
}

void solutie() {

    char s[30] = "luffy is still joyboy";

    cout << LengthOfLastWord(s);

}


