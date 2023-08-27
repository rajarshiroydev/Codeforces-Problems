#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    long double r, area = 0; cin >> r;
    area = 3.141592653 * r * r;
    cout << fixed << setprecision(9) << area;
    return 0;
}