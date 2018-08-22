//Program to convert string to numbers
#include<iostream>
#include<map>
#include"str2num.h"
    using namespace my_namespace;

int main(int argc, char* argv[])
try
{
    std::cout<<"Numerical string(123):"<<(int )str2num("123")<<"\n";
    std::cout<<"Negative Numerical string(-12):"<<str2num("-12")<<"\n";
    std::cout<<"Decimal Numerical string(1.23542):"<<str2num("1.23542")<<"\n";
    
    //Intentioanally passed a non-numerical string to show example of exception thrown 
    std::cout<<"Non Numerical string(1a3):"<<str2num("1a3");
    
    return 0;
}
catch(std::exception &e)
{
    std::cerr<<e.what();
}
catch(std::string &e)
{
    std::cerr<<e;
}