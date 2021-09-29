#include <iostream>

int main(){

   int Sc[4];
   int So[2];

   int i,j;

   for(i=0;i<4;i++){
       std::cin>>Sc[i];
   }

   for(i=0;i<2;i++){
       std::cin>>So[i];
   } 

   int minSc=0;
   int minSo=0;


    for(i=1;i<4;i++){
        if(Sc[minSc]>=Sc[i]){
            minSc=i;
        }
    }


    Sc[minSc]=0;

    if(So[0]<=So[1]){
        minSo=0;
    }else{
        minSo=1;
    }

    So[minSo]=0;


    int sum=0;

    for(i=0;i<4;i++){
        sum+=Sc[i];
    }

    for(i=0;i<2;i++){
        sum+=So[i];
    }

    std::cout<<sum;

    return 0;
}