#include <iostream>

int main(){

    int arr[5];
    int sol=0;

    int i;
    for(i=0;i<5;i++){
        
        std::cin>>arr[i];
        
        if(arr[i]<=40){
            sol+=40;
        }else{
            sol+=arr[i];
        }
    }

    std::cout<<sol/i;    

    return 0;
}