#include <iostream>
#include <cmath>

int main(){

    int N;

    std::cin>>N;

    if(N%2==0){
        std::cout<<pow((N/2+1),2);
    }else{
        std::cout<<pow(((N+1)/2+1),2)-((N+1)/2+1);
    }
    return 0;
}