#include<iostream>
#include"fermat.h"

int main(int argc, char const *argv[])
{
    for(int x=1; x<20; ++x)
        std::cout<<"\n"<<x<<" : "<<My_namespace::is_prime(x);
        
    return 0;
}
