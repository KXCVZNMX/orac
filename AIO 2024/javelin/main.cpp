#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> distance(n);
  for (int i = 0; i < n; i++) {
    cin >> distance[i];
  }

  int cur_max = 0;
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (distance[i] > cur_max) {
      count++;
      cur_max = distance[i];
    }
  }

  cout << count;
  return 0;
}
