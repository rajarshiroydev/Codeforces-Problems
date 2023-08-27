#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    char c; cin >> c;
    int x = int(c);
    if(c == 'z') cout << 'a';
    else cout << char(x + 1);
    return 0;
}