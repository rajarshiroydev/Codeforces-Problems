#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int sum = 0;
        int x = max(a, b);
        int y = min(a, b);
        for (int i = y + 1; i < x; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}