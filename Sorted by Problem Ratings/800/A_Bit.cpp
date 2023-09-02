#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << ' ' << x << endl;
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    int ans = 0;

    while (t--) {
        string s; cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '+') {
                ans++;
                break;
            }
            if (s[i] == '-') {
                ans--;
                break;
            }
        }
    }
    cout << ans << endl;
}