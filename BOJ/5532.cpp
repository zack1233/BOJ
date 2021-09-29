#include <iostream>

int main(){

    int L,A,B,C,D;

    std::cin>>L;
    std::cin>>A;
    std::cin>>B;
    std::cin>>C;
    std::cin>>D;

    int a,b;

    if(A%C==0){
        a=A/C;
    }else{
        a=A/C+1;
    }

    if(B%D==0){
        b=B/D;
    }else{
        b=B/D+1;
    }

    if(A/C>=B/D){
        std::cout<<L-a<<std::endl;
    }else{
        std::cout<<L-b<<std::endl;
    }

    return 0;
}