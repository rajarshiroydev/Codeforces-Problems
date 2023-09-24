#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    string s = to_string(t);
    char to_remove;
    if (t >= 0) cout << t;
    else {
        if (s[s.size() - 1] >= s[s.size() - 2]) to_remove = s[s.size() - 1];
        else to_remove = s[s.size() - 2];
        ll pos = s.rfind(to_remove);
        s.erase(pos, 1);
        if (s == "-0") cout << '0';
        else cout << s;
    }
}
