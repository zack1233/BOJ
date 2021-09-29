#include <iostream>

int main(){

    int A,B,C;
    int D;

    std::cin>>A>>B>>C;
    std::cin>>D;

    //if(B*60+C+D>=3600){
    std::cout<<(A+(B+(C+D)/60)/60)%24<<" "<<(B+(C+D)/60)%60<<" "<<(C+D)%60;
    //}else{
    //    std::cout<<A%24<<" "<<B%60<<" "<<C+D%60;
    //}

    return 0;
}