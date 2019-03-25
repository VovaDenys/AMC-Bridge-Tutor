#include <iostream>
#include <cmath>
#include <iomanip>
int main() {

    long double a, b, c;
    long double P, p, S, r;
    std::cin>>a>>b>>c;
    P = a+b+c;
    p = P/2;
    S = sqrtl(p*(p-a)*(p-b)*(p-c));
//    r = 2*S/P;
    r = sqrtl(((p-a)*(p-b)*(p-c))/p);

        std::cout<<std::fixed<<std::setprecision(11)<<P<<" "<<S<<" "<<r;

    return 0;
}
//              3.0 4.0 5.0