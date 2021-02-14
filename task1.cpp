#include <iostream>
#include <string>


using namespace std;


void main()
{
    double x, y, f;
    x = 5;
    y = 8.2537;
    f = (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));
    cout << "x=" << x << "\n";
    cout << "y=" << y << "\n";
    cout << "f=" << f << "\n";

    cout << "Vvedite x\n";
    cin >> x;
    cout << "Vvedite y\n";
    cin >> y;
    f = (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));
    cout << "f=" << f;

}