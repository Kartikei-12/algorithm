//Test program to demonstrate
//Radix sort algorithm in C++
#include<iostream>
#include<vector>
#include<algorithm>
//File containing algorithm
#include"radix_sort.h"

int main(int argv,char *argc[])
{
    //Test data
    std::vector<int > a = {9, 4, 5, 10, 3, 2, 100, 1, 10, 8, 19};
    
    //Sorting
    My_namespace::radix_sort<int >(a);
    
    //Printing sorted data
    for(auto i:a)
        std::cout<<"\n"<<i;
    return 0;
}