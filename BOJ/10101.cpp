#include <iostream>

int main(){

    int r1,r2,r3;

    std::cin>>r1;
    std::cin>>r2;
    std::cin>>r3;

    if(r1+r2+r3==180){

     if(r1==60 && r2==60 && r3==60){
            std::cout<<"Equilateral";
        }else if(r1!=r2==true && r2!=r3==true && r3!=r1==true){
            std::cout<<"Scalene";
        }else{
            std::cout<<"Isosceles";
        }

    }else{
        std::cout<<"Error";
    }



    return 0;
}