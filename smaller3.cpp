#include <iostream>

int main()
{
  int num1, num2, num3;
    
  std::cout<<"Enter the first integer number: ";
  std::cin>>num1;
  std::cout<<"Enter the second integer number: "; 
  std::cin>>num2;
  std::cout<<"Enter the third integer number: "; 
  std::cin>>num3; 
    
  if(num1 > num2)
  {
    std::cout<<"The smaller number of the three integers is "<<num1<<"\n"; 
  }
  else if(num2 > num3)
  {
    std::cout<<"The smaller number of the three integers is "<<num2<<"\n"; 
  }
  else
  {
    std::cout<<"The smaller number of the three integers is "<<num3<<"\n"; 
    
  }
    return 0;
}