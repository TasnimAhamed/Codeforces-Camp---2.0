#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int w; cin >> w;

    if (w & 1 or w == 2) {
    	cout << "NO\n";
    }
    else {
    	cout << "YES\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}