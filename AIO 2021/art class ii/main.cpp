#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> xcord(n);
  vector<int> ycord(n);
  for (int i = 0; i < n; i++) {
    cin >> xcord[i] >> ycord[i];
  }

  int minx = 100000, maxx = 0, miny = 100000, maxy = 0;
  for (int i = 0; i < n; i++) {
    minx = min(minx, xcord[i]);
    maxx = max(maxx, xcord[i]);
    miny = min(miny, ycord[i]);
    maxy = max(maxy, ycord[i]);
  }

  int area = (maxx - minx) * (maxy - miny);
  cout << area;
}
