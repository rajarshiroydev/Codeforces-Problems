#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    long long n, m, k;
    cin >> n >> m >> k;
    if (n == 0 || k == 0)
        cout << 0;
    else
    {
        long long mini = min(n, min(m, k));
        n -= mini;
        m -= mini;
        k -= mini;
        long long first = min(n / 2, k);
        cout << mini + first;
    }

    return 0;
}