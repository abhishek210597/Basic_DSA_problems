/*
Problem: Maximum Average Temperature
An embedded device stores temperature readings from a sensor every second.
Given an array of temperature readings and an integer K, find the maximum sum of
any K consecutive readings. This can be used to detect the hottest time window
in a monitoring system.

Example
Input
Temperature = {2, 5, 1, 8, 2, 9, 1}
K = 3

Output
19

Explanation
2 + 5 + 1 = 8
5 + 1 + 8 = 14
1 + 8 + 2 = 11
8 + 2 + 9 = 19  ← Maximum
2 + 9 + 1 = 12
*/

#include <iostream>
#include <vector>

using namespace std;

int maxWindowSum(const vector<int> &temp, int K) {
  if (K > temp.size())
    return -1;

  int windowSum = 0;

  // Calculate first window
  for (int i = 0; i < K; i++) {
    windowSum += temp[i];
  }

  int maxSum = windowSum;

  // Slide the window
  for (int i = K; i < temp.size(); i++) {
    windowSum = windowSum - temp[i - K] + temp[i];

    if (windowSum > maxSum) {
      maxSum = windowSum;
    }
  }

  return maxSum;
}

int main() {
  vector<int> temperature = {2, 5, 1, 8, 2, 9, 1};
  int K = 3;

  cout << "Maximum Window Sum = " << maxWindowSum(temperature, K);

  return 0;
}