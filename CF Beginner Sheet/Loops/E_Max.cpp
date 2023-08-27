#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int n; cin >> n;
    int x;
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x > maxi) maxi = x;
    }
    cout << maxi;
    return 0;
}