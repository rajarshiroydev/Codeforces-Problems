#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    long long a, b, c, d; cin >> a >> b >> c >> d;
    if(a + b - c == d) cout << "YES";
    else if(a - b + c == d) cout << "YES";
    else if(a + b * c == d) cout << "YES";
    else if(a * b + c == d) cout << "YES";
    else if(a - b * c == d) cout << "YES";
    else if(a * b - c == d) cout << "YES";
    else cout << "NO";
    return 0;   
}

//3p2

// 3 * 2 * 1