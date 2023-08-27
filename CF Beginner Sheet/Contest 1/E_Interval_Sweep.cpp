#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int a, b; cin >> a >> b;
    if(a == 0 && b == 0) cout << "NO";
    else if(a - b == 1 || b - a == 1 || a - b == 0 || b - a == 0) cout << "YES";
    else cout << "NO"; 
    return 0;
}