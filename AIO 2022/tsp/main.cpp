#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> least(n);
  vector<int> most(n);
  for (int i = 0; i < n; i++) {
    cin >> least[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> most[i];
  }

  int least_sell = 0;
  for (int i = 0; i < n; i++) {
    if (least[i] > most[i]) {
      cout << "NO";
      return 0;
    } else if (least_sell > most[i]) {
      cout << "NO";
      return 0;
    } else {
      least_sell = max(least[i], least_sell);
    }
  }

  cout << "YES";
  return 0;
}
