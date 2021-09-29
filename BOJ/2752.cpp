#include <iostream>
#include <deque>


int main(){

    int a,b,c;
    std::deque<int> deq;

    std::cin>>a>>b>>c;

    deq.push_back(a);
    deq.push_back(b);
    deq.push_back(c);

    int size=deq.size();
    while(size--){
        for(int i=0;i<2;i++){
            if(deq[i]>deq[i+1]){
                int swap=deq[i];
                deq[i]=deq[i+1];
                deq[i+1]=swap;
            }
        }
    }
    for(int j=0;j<3;j++){
        std::cout<<deq[j]<<" ";
    }


    return 0;
}