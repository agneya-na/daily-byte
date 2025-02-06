/*  Given an arr of integers, find the first missing +ve positive integer in **linear time and constant space**.
In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates
and -ve numbers as well.s
for ex- [3,4,-1,1] return 2
[1,2,0] return 3                     LEETCODE 41 **HARD              */
// ham pehle brute force se krte h baad me optimize krenge

#include <iostream>
using namespace std;
int FindMissing(int arr[], int n) {
    
    for (int i = 1; i <= n + 1; i++) {
        bool isFound = true;
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                isFound = false;
                break; 
            }
        }
        if (isFound) {
        return i;
        }
    }
    
    
}

int main() {

    int arr[5] = {7,8,9,11,12};
    int a = FindMissing(arr,5);
    cout << a;
    return 0;
}