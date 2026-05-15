#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    int sz = s.size();

    if (sz <= 10) {
    	cout << s << "\n";
    }
    else {
    	cout << s[0] << sz - 2 << s[sz - 1] << "\n";
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