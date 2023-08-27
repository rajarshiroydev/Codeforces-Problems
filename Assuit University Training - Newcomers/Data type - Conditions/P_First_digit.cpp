#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int a; cin >> a;
    int x = a / 1000;
    int y = x % 1000;
    if(y % 2 == 0) cout << "EVEN";
    else cout << "ODD";
    return 0;
}