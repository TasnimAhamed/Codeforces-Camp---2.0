#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, b, c; cin >> a >> b >> c;
    
    a += (c / 2 + (c & 1));
    b += (c / 2);
    
    cout << (a > b ? "First\n" : "Second\n");
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