#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int a, c;
    char b; 
    cin >> a >> b >> c;
    if(b == '+') cout << a + c;
    else if(b == '-') cout << a - c;
    else if(b == '*') cout << a * c;
    else if(b == '/') cout << a / c;
    return 0;
}