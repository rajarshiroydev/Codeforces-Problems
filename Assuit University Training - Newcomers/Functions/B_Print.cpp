#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void printn(int n) {
    for(int i = 1; i <= n; i++) {
        if(i == n) cout << i;
        else cout << i << ' ';
    }
}
int main() {
    int n; cin >> n;
    printn(n);
    return 0;
}