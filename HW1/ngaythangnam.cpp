#include <bits/stdc++.h>
using namespace std;
void faster()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool testNamNhuan(int n)
{
    if ((n % 4 == 0 and n % 100 != 0) or n % 400 == 0)
        return true;
    return false;
}
int main()
{
    faster();
    int a, b, c;
    cin >> a >> b >> c;
    switch (b)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (a > 0 and a <= 31)
        {
            cout << "YES";
            break;
        }
        else
        {
            cout << "N0";
            break;
        }
    case 4:
    case 6:
    case 9:
    case 11:
        if (a > 0 and a <= 30)
        {
            cout << "YES";
            break;
        }
        else
        {
            cout << "N0";
            break;
        }
    case 2:
        if (testNamNhuan(c))
        {
            if (a > 0 and a <= 29)
            {
                cout << "YES";
                break;
            }
            else
            {
                cout << "N0";
                break;
            }
        }
        else
        {
            if (a > 0 and a <= 28)
            {
                cout << "YES";
                break;
            }
            else
            {
                cout << "N0";
                break;
            }
        }
    default:
        cout << "N0";
        break;
    }
    return 0;
}