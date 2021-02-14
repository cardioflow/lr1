
#include <iostream>

using namespace std;
void f(void);
double x, y, result;

void main()
{
    cout << "Vvedite x\n";
    cin >> x;
    cout << "Vvedite y\n";
    cin >> y;
    f();
    cout << "f = " << result;
}

void f()
{
    result = (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));

}