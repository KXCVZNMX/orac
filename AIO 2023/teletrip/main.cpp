#include <iostream>
#include <set>
using namespace std;

int main() {
  int n;
  cin >> n;
  string ins;
  cin >> ins;

  set<int> b;
  int location = 0;
  b.insert(location);
  for (char instruction : ins) {
    if (instruction == 'L') {
      location--;
    } else if (instruction == 'R') {
      location++;
    } else if (instruction == 'T') {
      location = 0;
    }
    b.insert(location);
  }
  cout << b.size();
  return 0;
}
