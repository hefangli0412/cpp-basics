/* Read a bunch of numbers until eof and compute the max, min, and average */

#include <iostream>

// for inital values of max and min below
#include <climits>

using namespace std;

int main() {

  // INCOMPLETE -- need initial values
  int min = INT_MAX;
  int max = INT_MIN;
  int sum = 0;
  int tot = 0;

  int val;

  cin >> val;

  while (!cin.fail()) {  // don't use eof() test
    if (val > max) {
      max = val;
    }
    if (val < min) {
      min = val;
    }

    sum += val;
    tot++;

    cin >> val;
  }

  if (!cin.eof()) {
    cout << "ERROR: invalid input" << endl;
    return 1;
  }

  if (tot > 0) {
    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;
    cout << "Average of values: " << sum / (double) tot << endl;
  }
  else {
    cout << "No values in input." << endl;
  }

  return 0;
}
