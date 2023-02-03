#include <iostream>

int main() 
{
  int year, month;
  std::cout<<"Enter a year: ";
  std::cin>>year;
  std::cout<<"Enter a month: ";
  std::cin>>month; 

  //February 
  if ((month == 2) && ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0))))
  {
    std::cout<<"29 days\n";
  }
  //February 
  else if(month==2)
  {
    std::cout<<"28 days\n";
  }
  //30 days
  else if(month==4 || month==6|| month==9 || month==11)
  {
    std::cout<<"30 days\n";
  }
  //31 days
  else if(month==1 || month==3|| month==5 || month==7 || month==8 || month==10|| month==12)
  {
    std::cout<<"31 days\n"; 
  }
  else
  {
    std::cout<<"Error\n"; 
  }
    
  
  return 0;
}