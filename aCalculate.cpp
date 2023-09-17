   #include "aCalculate.h"

    void Calculate(double y,double z)
    {
    int p=0;
    double i=-1;
    vector<aCalculation> massive;
    aCalculation massiveDod;
        while(i<1)
        {
            massiveDod.calculation(i,y,z);
            massive.push_back(massiveDod);
            cout<<"Element №"<<p+1<<" "<<massive[p].getA()<<endl;
            p++; i=i+0.2;
        }
    }