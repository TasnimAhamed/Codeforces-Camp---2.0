#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, x; cin >> n >> x;
    if (n % x) {
    	cout << 1 << "\n";
    	cout << n << "\n";
    }
    else {
    	cout << 2 << "\n";
    	cout << n - 1 << " " << 1 << "\n";
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