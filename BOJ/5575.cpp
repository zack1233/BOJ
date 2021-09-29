#include <iostream>
#include <vector>

int main(){

    int arr[3][6];


  


    for(int i=0;i<3;i++){
        for(int j=0;j<6;j++){
            std::cin>>arr[i][j];
        }
    }

   int secCnt[3];
   int hour[3];
   int min[3];
   int sec[3];
   for(int i=0;i<3;i++){
        secCnt[i]=(arr[i][3]-arr[i][0])*3600+(arr[i][4]-arr[i][1])*60+(arr[i][5]-arr[i][2]);
        hour[i]=secCnt[i]/3600;
        min[i]=(secCnt[i]%3600)/60;
        sec[i]=secCnt[i]%60;
   }


   for(int j=0;j<3;j++){
       std::cout<<hour[j]<<" "<<min[j]<<" "<<sec[j]<<std::endl;
   }

    


    return 0;
}