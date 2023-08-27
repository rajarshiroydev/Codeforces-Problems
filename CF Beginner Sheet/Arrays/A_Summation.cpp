#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    int t;
    cin >> t;
    long long sum = 0;
    while (t--)
    {
        long long n;
        cin >> n;
        sum += n;
    }
    cout << abs(sum);
    return 0;
}