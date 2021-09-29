#include <iostream>

int main(){

    int A,B;
    int C,D;

    std::cin>>A>>B;
    std::cin>>C>>D;

    if(A+D>=B+C){
        std::cout<<B+C;
    }else{
        std::cout<<A+D;
    }




    return 0;
}