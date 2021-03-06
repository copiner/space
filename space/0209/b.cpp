/*
  constructor destructor
*/

#include <iostream>

#define FULL_GAS 85

class Car{

public:
  std::string color;
  std::string engine;
  unsigned int gas_tank;
  unsigned int wheel;
  
  Car(void);
  void setColor(std::string c);
  void setEngine(std::string e);
  void setWheel(unsigned int w);
  void fillTank(unsigned int l);

  void warning(void);

  void running(void);
  
};

Car::Car(void)
{
  color = "white";
  engine = "v8";
  wheel = 4;
  gas_tank = FULL_GAS;

}

void Car::setColor(std::string c)
{
  color = c;
}

void Car::setEngine(std::string e)
{
  engine = e;
}

void Car::setWheel(unsigned int w)
{
  wheel = w;
}

void Car::fillTank(unsigned int l)
{
  gas_tank += l;
  std::cout<<"full gas tank: " << gas_tank<<"\n";;
}

void Car::running(void)
{

  while(gas_tank > 0)
  {
    std::cout << "running...\n";
    gas_tank--;
    std::cout << "surplus gas: "<<100*gas_tank/FULL_GAS<<"% gas!\n";

    if(gas_tank < 10)
    {
      warning();
      
      char i;
      std::cout << "add gas ? Y/N \n";
      std::cin >> i;

      if('Y' == i || 'y' == i)
      {
	int t = FULL_GAS - gas_tank;
	fillTank(t);
      }

      if(gas_tank<=0)
      {
	std::cout << "car break... ";
	break;
      }

    }

  }

}

void Car::warning(void)
{
  std::cout << "warning surplus: "<<100*gas_tank/FULL_GAS<<"% gas!\n";
}

int main()
{
  Car dcar;
  
  dcar.running();

  return 0;
}
