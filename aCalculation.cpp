#include "aCalculation.h"

void aCalculation::calculation(double x, double y, double z)
{
    double a1;
    b = 1 - x + pow(y, 2) / 6 + pow(z, 3) / 120 + pow(sin(x - z), 2) / (pow(y, 1.23) + z);
    a1 = 2 * cos(pow(abs(pow(x, 2) - b / 6), 1.0 / 3)) / (1 + x * b + pow(sin(pow(y, 3)), 2));
    a =a1 + pow(log(pow(fabs((x + 1) / z), 1.2)), 3);
}
double aCalculation::getA()
{
    return a;    
}
double aCalculation::getB()
{
    return b;
}