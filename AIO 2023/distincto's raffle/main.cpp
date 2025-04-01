#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> map(k + 1);
  for (int i = 0; i < n; i++) {
    int j;
    cin >> j;
    map[j]++;
  }

  for (int i = 0; i < k + 1; i++) {
    if (map[i] == 1) {
      cout << i;
      return 0;
    }
  }

  cout << -1;

  return 0;
}
