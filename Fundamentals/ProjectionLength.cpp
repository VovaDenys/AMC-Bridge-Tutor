#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int>vec;
    std::vector<int>vec2;
    std::vector<int>vec3;
    std::vector<int>::iterator it,it2,it3;
    int n=0, i, l, t3m, t3, t2, t2m;

    while(n != 8)
    {
        std::cin>>i;
        n++;
        if(n % 2 == 0)
            continue;
        vec.push_back(i);
        if(n == 3 || n == 1)
            vec2.push_back(i);
        if(n == 7 || n == 5)
            vec3.push_back(i);
    }

    std::sort(vec.begin(), vec.end());


    it2= vec2.begin();
    if(*it2 > *(it2+1)) {
        t2 = *it2;
        t2m = *(it2 + 1);
    }
    else {
        t2 = *(it2 + 1);
        t2m =  *it2;
    }

    it3= vec3.begin();

    if(*it3 < *(it3+1)) {
        t3 = *it3;
        t3m = *(it3 + 1);
    }
    else {
        t3 = *(it3 + 1);
        t3m =  *it3;
    }



    if(t2 < t3 || t2m > t3m)
        std::cout << 0;
    else {
        it = vec.begin() + 1;

        l = (*(it + 1) - *it);
        std::cout << l;
    }
    return 0;
}
//              2 8 18 12 10 32 7 1
//              6 8 12 12 10 32 18 1
//              10 32 7 1 2 8 5 12