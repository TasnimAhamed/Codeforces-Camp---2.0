#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k, x; cin >> n >> k >> x;
    if (x != 1) {
    	cout << "YES\n";
    	cout << n << "\n";
    	for (int i = 0; i < n; ++i) {
    		cout << 1 << " ";
    	}
    	cout << "\n";
    }
    else {
    	if (n & 1 and  k >= 3) {
    		cout << "YES\n";
    		cout << n/2 << "\n";
    		for (int i = 0; i < n / 2 - 1; ++i)
    		{
    			cout << 2 << " ";
    		}
    		cout << "3\n";
    	}
    	else if (n % 2 == 0 and k >= 2) {
    		cout << "YES\n";
    		cout << n/2 << "\n";
    		for (int i = 0; i < n / 2; ++i)
    		{
    			cout << 2 << " ";
    		}
    		cout << "\n";
    	}
    	else {
    		cout << "NO\n";
    	}
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