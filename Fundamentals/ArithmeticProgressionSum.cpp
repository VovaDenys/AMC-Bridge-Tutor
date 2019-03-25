#include <iostream>

int main() {
    int a, d, pos;
    std::cin>>a>>d>>pos;
    std::cout <<(( 2 * a + d*(pos-1))/2)*pos ;
    return 0;
}