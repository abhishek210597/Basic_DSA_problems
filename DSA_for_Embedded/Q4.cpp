
/*
Move all zeros to the end while maintaining the order of non-zero elements.

Example
Input: {0,1,0,3,12}

Output: {1,3,12,0,0}
*/

#include <iostream>
#include <vector>

using namespace std;

void moveZeros(vector<int> &arr) {
  int index = 0;

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] != 0) {
      swap(arr[index], arr[i]);
      index++;
    }
  }
}

int main() {
  vector<int> arr = {0, 1, 0, 3, 12};

  moveZeros(arr);

  for (int x : arr)
    cout << x << " ";

  return 0;
}