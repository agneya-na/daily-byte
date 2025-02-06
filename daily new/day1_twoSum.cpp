// given a list of numbers and a number k, return whether any two numbers from the list add up to k
// ex - given [10, 15, 3, 7] and k = 17 then return True. 
// Can we do in one pass??

#include <iostream>
using namespace std;

bool twoSum(int arr[], int size, int k) {
    
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
        if ((arr[i] + arr[j]) == k) {
            return true;
        }
    }
  }
  return false;

}

int main() {
    int arr[4] = {10, 15, 3, 7};
    int k;
    cin >> k;
    int size = 4;

    if (twoSum(arr, size, k)) {
        cout << "true";
    } 
    else {
        cout <<  "false";
    }
    
    return 0;
}