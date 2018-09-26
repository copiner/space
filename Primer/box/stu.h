#include <string>
class Student{

 public:
 Student(int id,string na,int x,int y,int z):name(na),no(id){
    score[0] = x,score[1] = y,score[2] = z;
    order = 1;
    average = (score[0]+score[1]+score[2])/3;
  }
 Student(){
    score[0] = score[1] = score[2] = 0;
    order = 1,average = 0;
  }
 void display();
 
 private:
 string name;
 int no;
 int score[3];
 float average;
 int order;
 
};
