#include <iostream>
#include "task6_func.cpp"
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