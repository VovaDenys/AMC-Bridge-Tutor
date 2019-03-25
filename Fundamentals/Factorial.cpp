#include <iostream>
#include <math.h>
#include <iomanip>

int factorial(int n){
int f;
    if( n == 1 || n == 0)
        return 1;
    else
        f = n * factorial(n-1);
       // std::cout<<f;
        return  n * factorial(n-1) ;
}

int main() {
    int n, s;
    std::cin>>n;
s = factorial(n);

std::cout<<s;
    return 0;
}


//          1.0 2.0 3