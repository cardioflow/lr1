#include <iostream>
#include "func.h"
using namespace std;

double x, y, result;

void f()
{
    result = (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));

}