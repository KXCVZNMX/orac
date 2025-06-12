#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;

  int x_mov = 0;
  int y_mov = 0;

  for (char c : s) {
    if (c == 'E') {
      x_mov++;
    } else if (c == 'W') {
      x_mov--;
    } else if (c == 'N') {
      y_mov++;
    } else if (c == 'S') {
      y_mov--;
    }
  }

  cout << abs(x_mov) + abs(y_mov);
}
