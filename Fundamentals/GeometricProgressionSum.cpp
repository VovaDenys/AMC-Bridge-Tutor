#include <iostream>
#include <math.h>
#include <iomanip>
int main() {
    double a, q, sum;
    int n;
    std::cin>>a>>q>>n;

if(q == 1)
        sum = a*n;
else
        sum = a * ((1 - pow(q,n)) / (1 - q)) ;

    std::cout<<std::fixed<<std::setprecision(11) << sum;
    return 0;
}
//          1.0 2.0 3