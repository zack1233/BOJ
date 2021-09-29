#include <iostream>

int main(){

    int A,B,C;

    std::cin>>A>>B;
    std::cin>>C;

    if(B+C>59){
        int hour=(B+C)/60;
        std::cout<<(A+hour)%24<<" "<<(B+C)%60; 
    }else{
        std::cout<<A%24<<" "<<B+C;
    }


    return 0;
}