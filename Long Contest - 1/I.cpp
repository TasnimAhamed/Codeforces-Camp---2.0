#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    vector<int> v(n - 1);
    for (auto& x : v) {
    	cin >> x;
    }

    ll goal = accumulate(v.begin(), v.end(), 0LL);
    cout << goal * -1 << "\n";
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