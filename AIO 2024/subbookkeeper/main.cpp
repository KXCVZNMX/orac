#include <iostream>
#include <vector>
#define speed()                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(nullptr)
#define vin(lname, size)                                                       \
  for (int i = 0; i < size; i++)                                               \
  cin >> lname[i]
#define io(in, out)                                                            \
  speed();                                                                     \
  freopen((in), "r", stdin);                                                   \
  freopen((out), "w", stdout)
#define aio(name) io(#name "in.txt", #name "out.txt")
using namespace std;

int findit(vector<char> v, int n, char target) {
  for (int i = 0; i < n; i++) {
    if (v[i] == target) {
      return i;
    }
  }
  return -1;
}

int favoriteness(vector<char> v, int n) {
  int count = 0;
  for (int i = 1; i < n; i++) {
    if (v[i] == v[i - 1]) {
      count++;
    }
  }
  return count;
}

bool left_right(vector<char> v, int n, int pos) { // true: right, false: left
  if (pos == 0)
    return true;
  else if (pos == n - 1)
    return false;
  else if (v[pos - 1] == v[pos + 1])
    return true;

  int left_count = 0;
  char left_cmp = v[pos - 1];
  int right_count = 0;
  char right_cmp = v[pos + 1];
  for (int i = pos + 1; i < n; i++) {
    if (v[i] == right_cmp) {
      right_count++;
    } else {
      break;
    }
  }
  for (int i = pos - 1; i > 0; --i) {
    if (v[i] == left_cmp) {
      left_count++;
    } else {
      break;
    }
  }
  return left_count > right_count ? false : true;
}

int main() {
  int n;
  cin >> n;
  vector<char> word(n);
  vin(word, n);

  int pos = findit(word, n, '?');
  word[pos] = left_right(word, n, pos) ? word[pos + 1] : word[pos - 1];
  cout << favoriteness(word, n);

  return 0;
}
