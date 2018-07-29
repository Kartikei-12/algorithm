//Test program to demonstrate
//Bubble sort algorithm in C++
#include<iostream>
#include<vector>
//File containing algorithm
#include"bubble_sort.h"

int main(int argv,char *argc[])
{
    //Test data
    std::vector<int > a = {9, 4, 5, 10, 3, 2, 1};
    
    //Sorting
    My_namespace::bubble_sort<int >(a);
    
    //Printing sorted data
    for(auto i:a)
        std::cout<<"\n"<<i;
    return 0;
}