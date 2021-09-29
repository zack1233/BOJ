#include <iostream>

int main(){

    int T;
    int ans[5];
    int i;

    std::cin>>T;

    for(i=0;i<5;i++){
        std::cin>>ans[i];
    }

    int result=0;

    for(i=0;i<5;i++){
        if(T==ans[i]){
            result++;
        }
    }

    std::cout<<result;

    return 0;
}