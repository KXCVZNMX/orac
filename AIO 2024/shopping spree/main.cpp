#include <iostream>
#include <vector>
using namespace std;

vector<int> form_array(vector<int> prices, int n, int k) {
  vector<int> ret;
  int i = 0;
  int j = n - 1;

  while (i < j) {
    if (k > 0) {
      ret.push_back(prices[i]);
      i++;
      j--;
      k--;
    } else {
      ret.push_back(prices[j]);
      j -= 2;
    }
  }

  return ret;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> price_list(n);
  for (int i = 0; i < n; i++) {
    cin >> price_list[i];
  }

  vector<int> prices = form_array(price_list, n, k);

  int result = 0;
  for (int i = 0; i < prices.size(); i++) {
    result += prices[i];
  }

  cout << result;
  return 0;
}
