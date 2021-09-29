#include <iostream>

int main(){

    int arr[4];

    int i;

    for(i=0;i<4;i++){
        std::cin>>arr[i];
    }
    i=0;
    int inc,dec,ide;

    inc=0;
    dec=0;
    ide=0;

    do{

        if(i==3){
            break;
        }

        if(arr[i]<arr[i+1]){
            inc++;
        }else if(arr[i]>arr[i+1]){
            dec++;
        }else{
            ide++;
        }

        i++;

    }while(true);

    if(inc==3){
        std::cout<<"Fish Rising";
    }else if(dec==3){
        std::cout<<"Fish Diving";
    }else if(ide==3){
        std::cout<<"Fish At Constant Depth";
    }else{
        std::cout<<"No Fish";
    }


    return 0;
}