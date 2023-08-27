#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    float a, b; cin >> a >> b;
    float x = b / (1 - (a / 100));
    cout << fixed << setprecision(2) << x;
    return 0;
}

/***
x - (.2 * x) = 80
x(1 - .2) = 80
x = 80 / (1 - .2)
x = b / (1 - a)
***/