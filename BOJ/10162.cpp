#include <iostream>

int main(){

    int T=0;
    int hour=0;
    int min=0;
    int sec=0;

    std::cin>>T;

    if(T%10 != 0){
        std::cout<<-1;
        return 0;
    }

    while(T>=300){
        T-=300;
        hour++;
    }

    while(T>=60){
        T-=60;
        min++;
    }    

    while(T>=10){
        T-=10;
        sec++;
    }

    std::cout<<hour<<" "<<min<<" "<<sec;

    return 0;
}