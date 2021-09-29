#include <iostream>

int main(){


    int L,S;

    std::cin>>L;
    std::cin>>S;

    if(S<=L){
        std::cout<<"Congratulations, you are within the speed limit!";
    }else if(S<=L+20){
        std::cout<<"You are speeding and your fine is $100.";
    }else if(S<=L+30){
        std::cout<<"You are speeding and your fine is $270.";
    }else{
        std::cout<<"You are speeding and your fine is $500.";
    }

    return 0;
}