#include <iostream>
#include <iomanip>

using namespace std;

#define PI 3.14

int main()
{
    double h, r;
    cin >> h >> r;
    double theTich = (h * PI * r * r) / 3;
    cout << fixed << setprecision(3) << theTich << endl;
    return 0;
}