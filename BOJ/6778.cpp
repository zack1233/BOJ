#include <iostream>

int main(){

    int a,e;

    std::cin>>a;
    std::cin>>e;

    if(3<=a && e<=4){
        std::cout<<"TroyMartian"<<std::endl;
    }

    if(a<=6 && 2<=e){
        std::cout<<"VladSaturnian"<<std::endl;
    }

    if(a<=2 && e<=3){
        std::cout<<"GraemeMercurian"<<std::endl;
    }

    return 0;
}