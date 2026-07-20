/*
Given an array, find the first element that appears only once.

Example
Input:
{4, 5, 1, 2, 1, 4, 5}

Output: 2
*/

#include <iostream>
#include <unordered_map>
#include <vector>


using namespace std;

int firstNonRepeating(const vector<int> &arr) {
  unordered_map<int, int> freq;

  // Count frequency
  for (int num : arr) {
    freq[num]++;
  }

  // Find first element with frequency 1
  for (int num : arr) {
    if (freq[num] == 1) {
      return num;
    }
  }

  return -1;
}

int main() {
  vector<int> arr = {4, 5, 1, 2, 1, 4, 5};

  cout << firstNonRepeating(arr);

  return 0;
}