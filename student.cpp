#include <iostream>
using namespace std;

// student info(decleration)
class student{
public:
  string stuname();
  int stuid();
  char stuchar();

};

// student class def
string student::stuname()
int student::stuid()
char student::stuchar()
{
cout<<"Stu id: ";
cin<<stuid<<endl;
cout<<"stu full name: ";
cin<<stuname<<endl;
cout<<"Gender: ";
cin<<stuchar<<endl;
cout<<"class: ";
cin<<stuchar<<endl;


return 0;

}

// main area(call)
int main(){
  student stu;
  cout<<stu.stuname();
  cout<<stu.stuid();
  cout<<stu.stuchar();
  return 0;

}
