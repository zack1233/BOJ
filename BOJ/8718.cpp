#include <iostream>

int main(){

    int x,k;    //x는 총 눈의 양(리터단위), k는 찌른 눈덩이의 양(리터단위)

    std::cin>>x>>k;

    if(7*k<=x){
        std::cout<<7000*k;
    }else if(3.5*k<=x){
        std::cout<<3500*k;
    }else if(1.75*k<=x){
        std::cout<<1750*k;
    }else{
        std::cout<<0;
    }




    return 0;
}