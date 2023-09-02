//800
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s; cin >> s;
    vector<int> v;
    for (int i = 0; i < s.size(); i += 2) {
        int x = s[i] - '0';
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if (i == v.size() - 1) cout << v[i];
        else cout << v[i] << "+";
    }
}