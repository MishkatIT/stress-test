#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  for (int i = 1; i <= t; i++) {
    int n;
    cin >> n;
    int sum = 0;
    for (int j = 1; j <= n; j++) {
      int x;
      cin >> x;
      sum += x;
    }
    cout << sum - rand() % 2 << '\n';
  }
  return 0;
}