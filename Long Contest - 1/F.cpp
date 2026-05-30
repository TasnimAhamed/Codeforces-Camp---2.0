#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
    	int x; cin >> x;
    	mp[x]++;
    }
    if (mp.size() > 2) {
    	cout << "No\n";
    	return;
    }
    
    int ff = mp.begin()->second;
    int ss = prev(mp.end())->second;
    if (abs(ff - ss) > 1) {
    	cout << "No\n";
    }
    else {
    	cout << "Yes\n";
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