#include <iostream>
#include <string>
#include <deque>
#include <cmath>

std::string n;
std::string m;
std::deque<int> ND; //dividend
std::deque<int> MD; //divisor

std::deque<int> quo; //quotient
std::deque<int> rem; //remainder

std::deque<int> mid; //middle remainder

void div(std::deque<int> a,std::deque<int> b){

    int nSize=a.size();
    int mSize=b.size();
    
    std::deque<long long> llN;
    llN.push_back(a[nSize-1]);

    if(nSize/20==0){
        for(int i=1;i<nSize;i++){
            llN.push_back(llN[i-1]+a[nSize-i-1]*pow(10,i));
        }
    }

    std::cout<<llN[nSize-1]<<std::endl;
/*
    for(int i=0;i<nSize/20;i++){
        if(nSize/20==0){
            for(int j=1;j<nSize%20;j++){
               if(j==1){
                   ll[i]=a[i];//
               }else{
                   ll[i]+=10*(j-1)*a[j-1];
               }
            }
        }else{

        }
    }
*/    

}

void quotient(std::deque<int> a,std::deque<int> b){
    //TODO
   // return;
}

void remainder(std::deque<int> a,std::deque<int> b){
    //TODO
   // return;
}

void multiply(std::deque<int> a,std::deque<int> b){
    //TODO
   // return;
}

void minus(std::deque<int> a,std::deque<int> b){
    //TODO
    //return;
}



int main(){

    std::cin >> n >> m;

    for(int i=0;i<n.size();i++){
        ND.push_back(n[i]-'0');
    }

    for(int j=0;j<m.size();j++){
        MD.push_back(m[j]-'0');
    }

    div(ND,MD);

    /*
    for(int a=0;a<ND.size();a++){i
        std::cout<<ND[a];
    }

    std::cout<<std::endl;

    for(int b=0;b<MD.size();b++){
        std::cout<<MD[b];
    }
    */

    return 0;
}