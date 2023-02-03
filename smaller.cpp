#include <iostream>

int main()
{
    int num1, num2;
    
    std::cout<<"Enter the first integer number: ";
    std::cin>>num1;
    std::cout<<"Enter the second integer number: "; 
    std::cin>>num2;
    
    if(num1>num2)
    {
        std::cout<<"The smaller number of the two integers is "<<num1<<"\n"; 
    }
    else
    {
        std::cout<<"The smaller number of the two integers is "<<num2<<"\n"; 
    }
    return 0;
}