#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(i == 0) cout << char(s[s[i] + 32]);
    }
    return 0;
}