#include<iostream>
#include <algorithm>
using namespace std;

string reverse(string s) {
  
   reverse(s.begin(), s.end());
    return s;
}


int main() {

    string s = "The Daily Byte";
    // cin >> s;
   cout << reverse(s);

    return 0;
}