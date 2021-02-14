#include <iostream>
#include "task5_func.cpp"
using namespace std;
double f(double x, double y);

void main()
{
    double x, y;
    cout << "Vvedite x\n";
    cin >> x;
    cout << "Vvedite y\n";
    cin >> y;
    cout << f(x, y);
}