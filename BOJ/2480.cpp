#include <iostream>

int maxNum(int a,int b,int c);

void sol(int a,int b,int c){
    int ans;

    if(a==b){
        if(b==c){
            std::cout<<10000+1000*a;
        }else{
            std::cout<<1000+100*a;
        }
    }else{
        if(b==c){
            std::cout<<1000+100*b;
        }else if(a==c){
            std::cout<<1000+100*a;
        }else{
            ans=maxNum(a,b,c);
            std::cout<<100*ans;

        }
    }

}

int maxNum(int a,int b,int c){

    

    if(a<b){
        if(b<c){
            return c;        
        }else{
            return b;
        }
    }else{
        if(c<a){
            return a;
        }else{
            return c;
        }
    }

}

int main(){

    int a,b,c;

    std::cin>>a>>b>>c;

    sol(a,b,c); 


    return 0;
}