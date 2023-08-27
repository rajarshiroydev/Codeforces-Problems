#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    char c;
    int t, n;
    cin >> c >> t;
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++) {
            cout << c;
        }
        cout << "" << endl;
    }
    return 0;
}