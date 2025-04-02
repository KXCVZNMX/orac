#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int prev = 0;
  int max = 0;
  int count = 1;
  for (int i = 0; i < n; i++) {
    int j;
    cin >> j;
    if (j != prev && i == 0) {
      max = j > max ? j : max;
    } else if (j == prev) {
      count++;
    } else if (j != prev) {
      max = prev * count > max ? prev * count : max;
      count = 1;
    }
    prev = j;
  }
  max = prev * count > max ? prev * count : max;
  cout << max;
  return 0;
}
