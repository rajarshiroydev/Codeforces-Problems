#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    ll arr[t];
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    int count = 0;
    int maxCount = 0;
    for (int i = 0; i < t - 1; i++) {
        if (arr[i + 1] >= arr[i]) {
            count++;
            if (count > maxCount) maxCount = count;
        }
        else count = 0;
    }
    cout << maxCount + 1;
}