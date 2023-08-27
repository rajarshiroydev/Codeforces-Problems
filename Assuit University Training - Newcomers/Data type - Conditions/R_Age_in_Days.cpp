#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int n; cin >> n;
    int x = n / 365;
    int a = n - (365 * x);
    int y = a / 30;
    int b = a - (y * 30);
    cout << x << " years" << endl << y << " months" << endl << b << " days";
    return 0;
}