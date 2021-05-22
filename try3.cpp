#include <iostream>
using namespace std;


// Main Area
int main()
{
  string name, age, gender;
  int id;

  cout << "Enter sudent id: ";
  cin >> id;
  cout << "Enter sudent name: ";
  cin >> name;
  cout << "Enter sudent age: ";
  cin >> age;
  cout << "Enter sudent Gender: ";
  cin >> gender;

      string STI,GRD, INR;

    cout << "Enter sudent id: ";
    cin >> id;

    cout<< "Enter for student info--STI, Grade--GRD, instractor--INR: ";
    cin >> STI;

// switch
if("STI"){
  cout << "Stu info"<< endl;
  cout << "name: "<< name <<endl;
  cout << "Age: "<< age <<endl;
  cout << "Gender: "<< gender;
}
else if("GRD"){
  cout << "Stu GRD RESULT IS"<< endl;
}
else if("INR"){
  cout << "Stu GRD RESULT IS"<< endl;
}
else {
  cout << "Error! stu id is not correct"<< endl;
  return 0;
}
   return 0;


}
