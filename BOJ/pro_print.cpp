#include <string>
#include <vector>
#include <iostream>
//using namespace std;

int solution(std::vector<int> priorities, int location) {
    int answer = 0;
    bool flag=true;

    int l=0;
    int i;

    for(i=1;i<priorities.size();i++){
        
        if(priorities[l]<priorities[i]){
            flag=false;
            priorities.push_back(priorities[l]);
            priorities.erase(priorities.begin()+l);
        }
    
    }


//    while()

    return answer;

}

int main(){

    std::vector<int> priorities;
    int location=2;
    int result;

    priorities.push_back(2);
    priorities.push_back(1);
    priorities.push_back(3);
    priorities.push_back(2);
     
    result=solution(priorities,location);

    std::cout<<result;

    return 0;
}