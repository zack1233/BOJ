#include <iostream>

int main(){

    int D,H,M;

    std::cin>>D>>H>>M;


    if(((D-1)*24*60+(H-1)*60+M)-(10*24*60+10*60+11)<0){
        std::cout<<-1;
    }else{

        std::cout<<((D-1)*24*60+(H-1)*60+M)-(10*24*60+10*60+11);

    }



    return 0;
}