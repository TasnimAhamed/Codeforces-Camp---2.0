#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int one = 0, n_one = 0;
    for (int i = 0; i < n; ++i)
    {
    	int x; cin >> x;
    	if (x > 0) {
    		one++;
    	}
    	else {
    		n_one++;
    	}
    }

    if (one >= n_one) {
    	if (n_one & 1) {
    		cout << 1 << "\n";
    	}
    	else {
    		cout << 0 << "\n";
    	}
    }
    else {
    	int mn = (n_one - one + 1) / 2;
    	one += mn;
    	n_one -= mn;
    	if (n_one & 1) {
    		++mn;
    	}
    	cout << mn << "\n";
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