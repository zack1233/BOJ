//k,w,m 세 수를 받아서 k+m*n>=w 를 만족하는 최소의 n 값을 찾는 문제

#include <iostream>

int main(){

    long long k,w,m;

    std::cin>>k>>w>>m;

    long long ans=0;

    while(1){
        if(k+m*ans>=w){
            break;
        }
        ans++;
    }

    std::cout<<ans;


    return 0;
}