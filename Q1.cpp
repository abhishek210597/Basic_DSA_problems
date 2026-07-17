/*
An embedded system receives sensor packets represented by sensor IDs.
Due to a communication issue, some packets are received more than once.
Given an array of sensor IDs, return the first sensor ID whose second occurrence
appears first.
If no duplicate exists, return -1.

Example 1
Input:
{5, 2, 8, 7, 2, 5, 8}

Output: 2

*/

#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int firstDuplicate(const vector<int> &packets) {
  unordered_set<int> seen;

  for (int id : packets) {
    if (seen.find(id) != seen.end()) {
      return id;
    }

    seen.insert(id);
  }

  return -1;
}

int main() {
  vector<int> packets = {5, 2, 8, 7, 2, 5, 8};

  cout << "First Duplicate Sensor ID = " << firstDuplicate(packets);

  return 0;
}