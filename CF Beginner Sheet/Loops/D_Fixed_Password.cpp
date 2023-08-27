#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int x;
    bool flag = true;
    while(flag) {
        cin >> x;
        if(x != 1999) {
            cout << "Wrong" << endl;
        }
        else {
            cout << "Correct";
            flag = false;
        }
    }
    return 0;
}