#include <iostream>

int main(){

    int m,d;

    std::cin>>m;
    std::cin>>d;

    if(1<=m && m<=12 && 1<=d && d<=31){
        if(m==1 || (m==2 && d<18)){
           std::cout<<"Before";
       }else if(m==2 && d==18){
          std::cout<<"Special";
     }else{
            std::cout<<"After";
        }
    }
    return 0;
}