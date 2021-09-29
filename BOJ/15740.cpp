#include <iostream>
#include <string>
#include <vector>
#include <deque>


std::deque<int> firstSub(std::string a,std::string b){

    std::deque<int> result;

    std::vector<int> strA;
    std::vector<int> strB;

    int i;
    bool flag=false;
    int digitA=a.size();
    int digitB=b.size();

    for(i=0;i<digitA;i++){
        strA.push_back(a[i]);
    }

    for(i=0;i<digitB;i++){
        strB.push_back(b[i]);
    }

    i=0;
    int carry=0;

    if(digitA>digitB){

        int cntA=digitA;

        while(cntA>0){
            
            int numA;

            if(flag){
                 numA=std::stoi(a.substr(a.size()-(i+1),1),0,10)-1;
            }else{
                 numA=std::stoi(a.substr(a.size()-(i+1),1),0,10);
            }

            int numB=0;
            if(digitB-->0){
                numB=std::stoi(b.substr(b.size()-(i+1),1),0,10);
            }
            int count=0;

            if(numA>=numB){
                flag=false;
                carry=0;
                count=numA-numB;
            }else{
                flag=true;
                carry=10;
                count=numA+carry-numB;
            }

//          std::cout<<count<<std::endl;

            if(!(cntA==1 && count==0)){
                 result.push_front(count);
            }
 
            cntA--;
            i++;
        }

    }else if(digitA<digitB){

    }else{

    }


    return result;
}



int main() {

    // subtraction of Big Integer
    // we can think two ways, 1. a - b 2. a + (-b)

    std::string s1;
    std::string s2;

    std::cin>>s1;
    std::cin>>s2;

    std::deque<int> finalR;

    finalR=firstSub(s1,s2);

    int i;

    for(i=0;i<finalR.size();i++){
        std::cout<<finalR[i];
    }    

    return 0;
}


