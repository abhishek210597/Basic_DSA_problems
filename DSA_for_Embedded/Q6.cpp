
/*
Rotate an array to the right by K positions.

Example
Input:
Array = {1,2,3,4,5,6,7}
K = 3

Output:
{5,6,7,1,2,3,4}
*/

#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

void rotateArray(vector<int> &arr, int k) {
  int n = arr.size();

  k = k % n;

  reverse(arr.begin(), arr.end());
  reverse(arr.begin(), arr.begin() + k);
  reverse(arr.begin() + k, arr.end());
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

  rotateArray(arr, 3);

  for (int x : arr)
    cout << x << " ";

  return 0;
}