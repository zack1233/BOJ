#include <iostream>
#include <algorithm>

using namespace std;
int main(){

    int arr[3];
    int a,b,c;

    std::cin>>a>>b>>c;

    arr[0]=a;
    arr[1]=b;
    arr[2]=c;

    
    sort(arr,arr+3);

    if(arr[0]==arr[1] && arr[1]==arr[2]){
        std::cout<<2;
    }else if(arr[0]*arr[0]+arr[1]*arr[1]==arr[2]*arr[2]){
        std::cout<<1;
    }else{
        std::cout<<0;
    }



    return 0;
}