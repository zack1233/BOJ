#include <iostream>

int main(){

    int a,b,c; //상덕버거, 중덕버거, 하덕버거
    int x,y; // 사이다, 콜라

    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    std::cin>>x;
    std::cin>>y;

    int price;

    if(a<b){
        b=a;
        if(b<c){
            c=a;
            price+=a;
        }else{
            if(a<c){
                c=a;
                price+=a;
            }else{
                a=c;
                price+=a;
            }
        }
    }else{
        a=b;
        if(b>c){
            b=c;
            a=c;
            price+=a;
        }else{
            c=b;
            price+=a;
        }
    }

    if(x<y){
        price+=x;
    }else{
        price+=y;
    }

    price-=50;

    std::cout<<price<<std::endl;

    return 0;
}