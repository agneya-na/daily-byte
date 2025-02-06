// ignoring case and alphabetical characters
// TLE

#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int st = 0;
    int end = s.length() - 1;
    while (st <= end) {
        if (s[st] == s[end]) {
            return true;
        }
        else {
            st++;
            end--;
        }
    }
    return false;
}

int main(){
    string s = " ";
    string s1 = "race a car";
    string s2 = "A man, a plan, a canal: Panama";

    cout << isPalindrome(s) << endl;
    cout << isPalindrome(s1) << endl;
    cout << isPalindrome(s2) << endl;
    return 0;
}