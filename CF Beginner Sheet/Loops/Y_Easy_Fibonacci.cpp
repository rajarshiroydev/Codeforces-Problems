#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int n, first = 0, second = 1, current; cin >> n;
    for(int i = 0; i < n; i++) {
        cout << first << ' ';
        current = first + second;
        first = second;
        second = current;
    }
    return 0;
}