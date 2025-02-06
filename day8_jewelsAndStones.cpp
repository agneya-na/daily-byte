// Given a string representing your stones and another string a list of jewels, return the number of
// stones that you have that are also jewels.
//        LEETCODE 771 EASY

#include <iostream>
using namespace std;

int JewelsAndStones(string jewel, string stone) {
    int cnt = 0;
    for (int  i = 0; i < jewel.length(); i++) {
        for (int j = 0; j < stone.length(); j++) {
            if (jewel[i] == stone[j]) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    string jewel = "AYOPD";
    string stone = "ayopd";
    cout << JewelsAndStones(jewel, stone);
    return 0;
}