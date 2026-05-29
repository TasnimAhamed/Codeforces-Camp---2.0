#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (auto &x : v) {
    	cin >> x;
    	--x;
    	sum += x;
    }
    int curr = 0;
    for (int i = 0; i < n ; i++) {
    	curr += v[i];
    	if (curr == (sum - curr)) {
    		cout << i + 1 << "\n";
    		return;
    	}
    }

    cout << -1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}