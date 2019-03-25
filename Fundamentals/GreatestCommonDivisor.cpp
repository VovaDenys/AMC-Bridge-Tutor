#include <iostream>
#include <math.h>

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b, n;

    std::cin>>a>>b;
    n=(gcd(a,b));
    std::cout<<n;
    return 0;
}