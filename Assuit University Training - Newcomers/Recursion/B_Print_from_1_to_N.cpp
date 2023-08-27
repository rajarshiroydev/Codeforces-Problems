#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void one_to_n(int a, int n) {
    if(a > n) return;
    cout << a << endl;
    a++;
    one_to_n(a, n);
}
int main() {
    int n; cin >> n;
    int a = 1;
    one_to_n(a, n);
    return 0;
}