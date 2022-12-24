#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    cin >> a;
    long long b;
    cin >> b;
    char c;
    cin >> c;
    float d;
    cin >> d;
    double e;
    cin >> e;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << d << endl;
    cout << fixed << setprecision(7) << e << endl;
}