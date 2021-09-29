#include <iostream>

int main(){

    int day;
    int num[5];

    std::cin>>day;

    int i;
    int temp;
    for(i=0;i<5;i++){
        temp=0;
        std::cin>>temp;
        num[i]=temp;
    }

    int count=0;
    for(i=0;i<5;i++){
        if(day==num[i]){
            count++;
        }
    }

    std::cout<<count;

    return 0;
}