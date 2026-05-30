#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    int mn = INT_MAX;
    for (auto &x : v) {
    	cin >> x;
    	mn = min(mn, x);
    }
    vector<int> a, b;
    for (auto &x : v) {
    	if (x == mn) {
    		a.push_back(x);
    	}
    	else {
    		b.push_back(x);
    	}
    }
    if (b.size()) {
    	cout << a.size() << " " << b.size() << "\n";
    	for (auto x : a) {
    		cout << x << " ";
    	}
    	cout << "\n";
    	for (auto x : b) {
    		cout << x << " ";
    	}
    	cout << "\n";
    }
    else {
    	cout << -1 << "\n";
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