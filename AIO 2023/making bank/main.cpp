#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<char> days(n);
  for (int i = 0; i < n; i++) {
    cin >> days[i];
  }

  int money = 0;
  int skill = 1;
  for (int i = 0; i < n; i++) {
    if (days[i] == 'M') {
      money += skill;
    } else if (days[i] == 'C') {
      if ((n - i - 1) * (skill + 1) > (n - i) * skill) {
        skill++;
      } else {
        money += skill;
      }
    }
  }

  cout << money;
  return 0;
}
