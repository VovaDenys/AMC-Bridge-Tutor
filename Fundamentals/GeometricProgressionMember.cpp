#include <iostream>
#include <math.h>
#include <iomanip>

int main()
{
    int  n ;
    double a , q;

    std::cin>>a>>q>>n;
    std::cout<<std::fixed<<std::setprecision(8)<<a * pow(q,n-1);

    return 0;
}