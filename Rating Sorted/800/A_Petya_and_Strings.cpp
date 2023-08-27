#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    string a, b; cin >> a >> b;
    for(int i = 0; i < a.size(); i++) {
        if(int(a[i]) >= 65 && int(a[i] <= 90)) {
            a[i] = char(int(a[i]) + 32);
        }
    }
    for(int i = 0; i < a.size(); i++) {
        if(int(b[i]) >= 65 && int(b[i] <= 90)) {
            b[i] = char(int(b[i]) + 32);
        }
    }
    if(a < b) cout << - 1;
    else if(a > b) cout << 1;
    else cout << 0;
    return 0;
}