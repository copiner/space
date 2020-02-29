#include <iostream>

void print(int *pBegin, int *pEnd);
void print(char *pBegin, char *pEnd);

int main()
{
  int num[5] = {3,4,7,8,9};
  char name[5] = {'w','g','p','d','a'};
  
  print(num,num+5);
  std::cout<<"\n";
  print(name,name+5);
  std::cout<<"\n";
  return 0;
}

void print(int *pBegin, int *pEnd)
{
  while(pBegin != pEnd){

    std::cout<<*pBegin;
    ++pBegin;

  }
}

void print(char *pBegin, char *pEnd)
{
  while(pBegin != pEnd){

    std::cout<<*pBegin;
    ++pBegin;

  }
}
