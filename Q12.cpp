#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cout << "#12:-> Write a program to calculate the Gross Salary of an employee."<<endl;
  cout << "Assume Gross Salary=Basic Salary+DA+HRA"<<endl;
  cout << "DA=40% of Basic Salary"<<endl;
  cout << "HRA=20% of Basic Salary"<<endl;
  cout << "=====================================================================";
  cout << "\nProgram Start here:->" << endl;
  cout << "\n+++++++++++++++++++++"<<endl;

  double basic_salary =0, DA=0, HRA =0;

  cout << "Type Your Basic Salary: "<<endl;
  cin >> basic_salary;

  DA = (40/100)*basic_salary;
  HRA = (20/100)*basic_salary;

  cout << "Basic Salary:-> "<<(basic_salary + DA +HRA)<<endl;
  return 0;
}








