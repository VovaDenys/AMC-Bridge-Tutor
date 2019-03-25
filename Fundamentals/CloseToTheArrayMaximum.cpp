#include <iostream>
#include<vector>
#include <cmath>

int main() {
    double i=0,e,max;
    int num = 0;
    std::vector<double>vec;
    std::vector<double>::iterator it;

    while(i!=-1.0)
    {
        std::cin>>i;
    if(i==-1.0)
        continue;
        vec.push_back(i);
    }

    e = vec.front();
    it = vec.begin();
    vec.erase(it);


    max=vec.front();
    for(it=vec.begin(); it!=vec.end(); it++ )
    {
        if( max < *it)
            max = *it;
    }
//    std::cout <<max <<std::endl;

    for(it=vec.begin(); it!=vec.end(); it++ )
    {
        if( fabs(*it - max)  < e){
            num++;
//            std::cout<< std::fixed<<*it<<" | " << (*it - max) <<" | " << fabs(*it - max)<<std::endl;
        }

    }

//    std::cout<<std::fixed <<e<<std::endl;
//   for(it=vec.begin(); it!=vec.end(); it++ )
//        std::cout<<std::fixed<<*it <<" ";

    std::cout <<num;


    return 0;
}
//          0.01 3.24 -175.2321 1.4352 5.0 5.01001 5.0001 2.0 -17.0 -1.0