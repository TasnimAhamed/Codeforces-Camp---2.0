#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    set<char> st;
    for (auto ch : s) {
    	st.insert(ch);
    }

    if (st.size() & 1) {
    	cout << "IGNORE HIM!\n";
    }
    else {
    	cout << "CHAT WITH HER!\n";
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