#include<iostream>
using namespace std;

class Box{
public:
  double length;
  double width;
  double height;
  void display(){
     cout<<"length: "<<length<<endl;
     cout<<"width: "<<width<<endl;
     cout<<"height: "<<height<<endl;
  }
  Box(double l,double w,double h){
    length = l;
    width = w;
    height = h;
  }
  Box(Box &x){
    length = x.length;
    width = x.width;
    height = x.height;
  }
};
int main(){
  Box Box1(1,2,3);
  Box Box2(Box1);
  Box1.display();
  Box2.display();
  return 0;
}
    
