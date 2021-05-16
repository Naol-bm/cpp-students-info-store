#include <iostream>
using namespace std;

// student info
class student{
public:
  string stuname(string x);
  int age(int y);
};
// student class def
string student::stuname(string x),
int student::age(int y){

cout<<"first name: ";
cin >> x;
cout<<"middel name: ";
cin >> x;
cout<<"age: ";
cin >> y;
}

// main area
int main(){
  student stu;
  cout<<stu.stuname();
  return 0;

}
