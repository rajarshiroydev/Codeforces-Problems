#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int n; cin >> n;
    int k = n;
    int rem, rev = 0;
    while(k != 0) {
        rem = k % 10;
        rev = rev * 10 + rem;
        k = k / 10;
    }
    if(rev == n) {
        cout << rev << endl << "YES";
    }
    else cout << rev << endl << "NO";
    return 0;
}