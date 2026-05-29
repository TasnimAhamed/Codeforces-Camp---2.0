#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, a, b; cin >> n >> a >> b;

    if ((n == a and n == b) or (a + b) <= (n - 2)) {
    	cout << "Yes\n";
    }
    else {
    	cout << "No\n";
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