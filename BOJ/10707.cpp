#include <iostream>

int main(){

    int A,B,C,D,P;

    std::cin>>A;
    std::cin>>B;
    std::cin>>C;
    std::cin>>D;
    std::cin>>P;

    int X=A*P;
    int Y=0;
    if(C>=P){
        Y=B;
    }else{
        Y=B+(P-C)*D;
    }

    int ans=(X>=Y)?Y:X;

    std::cout<<ans;

    return 0;
}