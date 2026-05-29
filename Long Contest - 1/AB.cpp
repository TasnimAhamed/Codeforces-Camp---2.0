#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    sort(v.begin(), v.end());
    if (v[0] == v[n - 1]) {
    	cout << "NO\n";
    }
    else {
    	cout << "YES\n";
    	cout << v[n - 1] << " " << v[0];
    	for (int i = 1; i < n - 1; i++) {
    		cout << " " << v[i];
    	}
    	cout << "\n";
    }
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