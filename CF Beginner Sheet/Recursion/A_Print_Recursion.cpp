#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void rec(int n) {
    if(n == 0) return;
    cout << "I love Recursion" << endl;
    n--;
    rec(n);
}
int main() {
    int n; cin >> n;
    rec(n);
    return 0;
}