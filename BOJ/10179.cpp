#include <iostream>
#include <vector>

int main(){

    int Tcase;
    std::vector<double> price;
    double price1;

    std::cin>>Tcase;

    int i;
    for(i=0;i<Tcase;i++){
        std::cin>>price1;
        price.push_back(price1);
    }    

    std::cout<<std::fixed;
    std::cout.precision(2);

    for(i=0;i<price.size();i++){
        std::cout<<"$"<<price[i]*0.8<<std::endl;
    }

    return 0;
}