#include <iostream>

int main(){

    int a;

    std::cin>>a;

    if(a%4==0){
        if(a%100!=0 || a%400==0){
            std::cout<<1;
        }else{
            std::cout<<0;
        }
    }else{
        std::cout<<0;
    }


    return 0;
}