#include <iostream>

int main(){

    int k,n,m;

    std::cin>>k>>n>>m;

    if(k*n-m<=0){
        std::cout<<0;
    }else{
        std::cout<<k*n-m;
    }

    return 0;
}