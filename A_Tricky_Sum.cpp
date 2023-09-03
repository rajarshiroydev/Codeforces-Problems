// #include<bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define ll long long
// #define debug(x) cout << #x << ' ' << x << endl;

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
//     int t; cin >> t;
//     while (t--) {
//         long long int n; cin >> n;
//         long long int totalSum = (n * (n + 1)) / 2;
//         long long int sumof2powers = pow(2, log2(n) + 1) - 1;
//         cout << totalSum - (sumof2powers * 2) << endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        long long int n; cin >> n;
        long long int s = (n * (n + 1)) / 2;
        long long pow2 = 1;
        while (pow2 <= n) {
            s -= pow2 * 2, pow2 *= 2;
        }
        cout << s << endl;
    }
}