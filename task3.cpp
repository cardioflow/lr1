#include <iostream>

using namespace std;
double f(double x, double y);

int main()
{
    double x, y;
    cout << "Vvedite x\n";
    cin >> x;
    cout << "Vvedite y\n";
    cin >> y;
    cout << f(x, y);
    return 0;
}
double f(double x, double y)
{
    return (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));
    cout.precision(5);
}