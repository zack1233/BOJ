#include <iostream>

int main(){

    int a,b;

    std::cin>>a>>b;
    
    if((a+b)%2!=0 || (a-b)%2!=0){
        std::cout<<-1<<std::endl;
    }else{
        if((a+b)/2>=0&&(a-b)/2>=0){
            if((a+b)/2 >= (a-b)/2){
                std::cout<<(a+b)/2<<" "<<(a-b)/2<<std::endl;
          }else{
              std::cout<<(a-b)/2<<" "<<(a+b)/2<<std::endl;
          }
        }else{
            std::cout<<-1<<std::endl;
        }
    }

    return 0;
}