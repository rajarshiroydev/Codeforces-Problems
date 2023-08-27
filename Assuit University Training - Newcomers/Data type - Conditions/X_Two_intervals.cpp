#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    long long a, b, c, d; cin >> a >> b >> c >> d;
    if(b < c || d < a) cout << -1;
    else {
        cout << max(a, c) << ' ';
        cout << min(b, d);
    }
    return 0;
}