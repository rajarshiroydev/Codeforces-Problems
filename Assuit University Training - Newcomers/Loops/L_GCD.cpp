#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int a, b, maxi = 1; cin >> a >> b;
    for(int i = 1; i <= min(a, b); i++) {
        if(a % i == 0 && b % i == 0) maxi = i;
    }
    cout << maxi;
    return 0;
}