#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, k; cin >> n >> k;
    vector<ll> v;
    ll oddStartPos = 0;
    for (int i = 1; i <= n; i += 2) {
        v.push_back(i);
    }
    int evenStartPos = v.size();
    for (int i = 2; i <= n; i += 2) {
        v.push_back(i);
    }
    if (k - 1 < evenStartPos) cout << (k * 2) - 1;
    else cout << (k - evenStartPos) * 2;
}