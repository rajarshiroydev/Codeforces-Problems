#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, t; cin >> n >> t;
    while (t--) {
        if (n % 10 == 0) {
            n = n / 10;
        }
        else n--;
    }
    cout << n;
}