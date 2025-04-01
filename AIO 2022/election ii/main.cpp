#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a = 0, b = 0, c = 0;
  for (int i = 0; i < n; i++) {
    char j;
    cin >> j;
    switch (j) {
    case 'A':
      a++;
      break;
    case 'B':
      b++;
      break;
    case 'C':
      c++;
      break;
    }
  }

  int max_vote = max(max(a, b), c);

  if (a > b && a > c) {
    cout << 'A';
  } else if (b > a && b > c) {
    cout << 'B';
  } else if (c > a && c > b) {
    cout << 'C';
  } else {
    cout << 'T';
  }

  return 0;
}
