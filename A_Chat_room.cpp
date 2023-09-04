#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s; cin >> s;
    string hello = "hello";
    int k = 0;
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == hello[k]) {
            ans = ans + s[i];
            if (k <= 5) k++;
        }
    }
    if (ans == "hello") cout << "YES";
    else cout << "NO";
}