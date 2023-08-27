#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int a; cin >> a;
    int one = a % 10;
    int hundred = (a / 10) % 10;
    if(one % hundred == 0 || hundred % one == 0) cout << "YES";
    else cout << "NO";
    return 0;
}