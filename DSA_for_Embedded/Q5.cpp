/*
Given a sorted array, remove duplicates in-place and return the number of unique
elements.

Example
Input:
{1,1,2,2,3,4,4}

Output: {1,2,3,4}
Length = 4
*/

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &arr) {
  if (arr.empty())
    return 0;

  int j = 0;

  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] != arr[j]) {
      j++;
      arr[j] = arr[i];
    }
  }

  return j + 1;
}

int main() {
  vector<int> arr = {1, 1, 2, 2, 3, 4, 4};

  int length = removeDuplicates(arr);

  for (int i = 0; i < length; i++)
    cout << arr[i] << " ";

  cout << "\nLength = " << length;

  return 0;
}