#include "aCalculate.h"
#include "aCalculation.h"

using namespace std;

int main()
{
    double x =0.48*12;
    double y = 0.47*12;
    double z = 1.32*12;

    aCalculation firsta;
    firsta.calculation(x,y,z);
    cout<<"a = "<<firsta.a<<endl;

    Calculate(y,z);
    
    return 0;
}

