#include <iostream>
#include <iomanip>
int main() {
    double c, r, pi=3.14159265359;
    std::cin>>c;
    r = c / (2*pi);
    std::cout<< std::fixed<<std::setprecision(9) <<( pi*r*r );
    return 0;
}