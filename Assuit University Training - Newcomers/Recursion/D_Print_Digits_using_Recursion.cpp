#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void digits(int n, bool start) {
    if(n == 0) {
        return;
    }
    int x = n % 10;
    digits(n / 10,0);
    if(start)
    {
        cout << x << endl;
    }
    else
        cout << x << ' ';
}
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        digits(n,1);
    }
}