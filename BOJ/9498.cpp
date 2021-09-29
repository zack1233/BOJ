#include <iostream>

int main(){

    int score;

    std::cin>>score;

    if(0<=score && score<=100){

        if(score>=90){
            std::cout<<"A";
        }else if(score>=80){
            std::cout<<"B";
        }else if(score>=70){
            std::cout<<"C";
        }else if(score>=60){
            std::cout<<"D";
        }else{
            std::cout<<"F";
        }

    }


    return 0;
}