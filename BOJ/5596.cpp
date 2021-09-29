#include <iostream>

int main(){

    int k1,k2,k3,k4;
    int s1,s2,s3,s4;
    int ksum;
    int ssum;


    std::cin>>k1>>k2>>k3>>k4;
    std::cin>>s1>>s2>>s3>>s4;


    ksum=k1+k2+k3+k4;
    ssum=s1+s2+s3+s4;

    if(ksum<=ssum){
        std::cout<<ssum;
    }else{
        std::cout<<ksum;
    }



    return 0;
}