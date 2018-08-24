//This program shows usage of Sieve Of Eratosthenes
#include<iostream>
#include<vector>
#include"sOE.h"

int main()
{
    std::vector<int > primeList = My_namespace::getSieveOfEratosthenes(140);
    std::cout<<"Result:"<<std::endl;
    
    for(auto& i:primeList)
        std::cout<<i<<std::endl;
    
    return 0;
}