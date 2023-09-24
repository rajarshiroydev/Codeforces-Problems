#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s; cin >> s;
    int count = 0;
    char start = s[0];
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == start) {
            count++;
        }
        else {
            start = s[i];
            count = 0;
        }
        if (count == 6) {
            break;
        }
    }
    if (count == 6) cout << "YES";
    else cout << "NO";
}