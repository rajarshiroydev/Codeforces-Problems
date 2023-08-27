#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    long long t; cin >> t;
    while(t--) {
        long long n, rem; cin >> n;
        if(n == 0) {
            cout << 0 << endl;
            continue;
        } 
        
        while(n != 0) {
            rem = n % 10;
            cout << rem << ' ';
            n /= 10;
        }
        cout << "" << endl;
    }
    return 0;
}