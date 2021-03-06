//Test program to demonstrate
//Quick(Lomuto) sort algorithm in C++
#include<iostream>
#include<vector>
#include<algorithm>
//File containing algorithm
#include "quick_sort.h"

int main(int argv,char *argc[])
{
    //Test data
    std::vector<int > a = {2, 3, 9, 4, 5, 6, 8, 7, 9, 1, 11, 16, 12};
    
    //Sorting
    My_namespace::quick_sort<int >(a);
    
    //Printing sorted data
    for(auto i:a)
        std::cout<<"\n"<<i;
    return 0;
}