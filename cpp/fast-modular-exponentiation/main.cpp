#include<iostream>
#include"modular-expoent.h"

int main()
{
    int a=5, b=3, m=2;
    std::cout<<"Result of (5^3)%2 = "<<my_namespace::mod_Exp(a, b, m);
    return 0;
}