#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

//using namespace std;

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int solution(int n, std::vector<std::string> data) {
    int answer = 0;

    





    return answer;
}

int main(){

   int n;
   std::vector<std::string> data;
   int answer;

    std::cin>>n;
    int i;
    for(i=0;i<n;i++){
        std::cin>>data[i];
    }

   answer=solution(n,data); 

   std::cout<<answer;



    return 0;
}