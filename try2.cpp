#include <iostream>
using namespace std;

// student info(decleration)
class student{
public:
  string stuname();

};

// student class def
string student::stuname()
{

cout<<"first name: ";
return 0;

}

// main area(call)
int main(){
  student stu;
  cout<<stu.stuname();
  return 0;

}
