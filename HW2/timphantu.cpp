#include <iostream>
#include <cstring>
using namespace std;

const int A = 1001;
bool Flag[A];

int main()
{
    int n;
    cin >> n;
    int a[n];
    memset(Flag, 0, sizeof(Flag));
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        int b;
        cin >> b;
        Flag[b] = 1;
    }
    bool Have = 0;
    for (int i = 0; i < n; ++i)
    {
        if (Flag[a[i]])
            continue;
        Have = 1;
        cout << a[i] << ' ';
    }
    if (!Have)
        cout << -1;
    return 0;
}