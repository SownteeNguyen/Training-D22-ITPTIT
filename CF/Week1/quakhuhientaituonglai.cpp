#include <bits/stdc++.h>
using namespace std;

bool testNamNhuan(int n)
{
    if ((n % 4 == 0 and n % 100 != 0) or n % 400 == 0)
        return true;
    return false;
}

int main() {
    int ngay, thang, nam;
    cin >> ngay >> thang >> nam;
    if (testNamNhuan(nam)) {
        if (ngay)
    }
}
