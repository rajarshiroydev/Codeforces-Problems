#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void n_to_one(int n) {
    if(n < 1) return;
    if(n == 1) cout << n;
    else cout << n << ' ';
    n--;
    n_to_one(n);
}
int main() {
    int n; cin >> n;
    n_to_one(n);
    return 0;
}