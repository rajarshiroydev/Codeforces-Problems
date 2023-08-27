#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int n; cin >> n;
    bool flag = false;
    for(int i = 2; i <= n; i += 2) {
        cout << i << endl;
        flag = true;
    }
    if(!flag) cout << -1;
    return 0;
}