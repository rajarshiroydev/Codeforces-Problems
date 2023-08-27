#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    int n;
    cin >> n;
    int a = 1;

    while (n--)
    {
        for (int i = a; i < a + 3; i++)
        {
            cout << i << ' ';
        }
        cout << "PUM" << endl;
        a += 4;
    }
    return 0;
}