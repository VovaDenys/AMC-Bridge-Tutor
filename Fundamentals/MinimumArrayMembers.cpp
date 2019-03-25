#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
#include <algorithm>
int main() {

    std::vector<int>vec;
    std::vector<int>::iterator it;
    int n=0, s, i, sum;

    while(i!=-1)
    {
        std::cin>>i;
        if(i==-1)
            continue;
        vec.push_back(i);
    }
    s = vec.front();
    it = vec.begin();
    vec.erase(it);
    vec.shrink_to_fit();
/*
    sort(vec.begin(),vec.end(), std::greater<int>());

    for(it=vec.begin(); it!=vec.end(); it++)
        std::cout << *it<<" ";
    std::cout << std::endl;
*/

    sort(vec.rbegin(),vec.rend());


sum=0;
    for(it=vec.begin(); it!=vec.end(); it++) {
        sum+=*it;
        n++;
        if( s < sum )
        {
//            std::cout<<sum<<" ";
            std::cout << n;
            break;
        }

    }
    if( vec.size()== n && s>sum)
        std::cout <<-1;

    return 0;
}
//              36 12 1 5 6 4 5 1 8 9 7 11 3 -1