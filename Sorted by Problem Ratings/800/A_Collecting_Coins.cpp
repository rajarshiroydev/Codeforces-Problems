#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        vector<ll> v(3);
        for (int i = 0; i < 3; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll n; cin >> n;
        ll rem1 = v[2] - v[1];
        ll rem2 = v[2] - v[0];
        if ((n - (rem1 + rem2)) < 0) cout << "NO" << endl;
        else if ((n - (rem1 + rem2)) % 3 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}