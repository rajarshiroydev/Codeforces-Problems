#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int a, b, count = 0; cin >> a >> b;
    for(int i = a; i <= b; i++) {
        int k = i, rem;
        bool flag = true;
        while(flag && k != 0) { //4
            rem = k % 10; //4
            if(rem == 4 || rem == 7) {
                k = k / 10;
            } 
            else flag = false;
        }
        if(flag) {
            cout << i << ' ';
            count = 1;  
        } 
    }
    if(count == 0) cout << -1;
    return 0;
}