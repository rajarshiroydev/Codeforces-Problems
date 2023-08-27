#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    long long a, b, c; cin >> a >> b >> c;
    if(ceil((a * b) /  c) != floor(a * b) /  c) cout << "double";
    else if(((a * b) /  c) > 2147483647) cout << "long long";
    else if(((a * b) /  c) < -2147483647) cout << "long long";
    else cout << "int";
    return 0;
}