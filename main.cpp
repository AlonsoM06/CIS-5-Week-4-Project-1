#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
// Project 1 — Alonso Martinez 
// CIS 5 Week 04 · Student card

int main() {
  const int CURRENT_YEAR = 2026;

  
  string name;
  int age;
  int credits;
  double gpa;
  int grad_year;
  cout << "Name: " ;
  cin >> name;
  cout << "Age: " ;
  cin >> age;
  cout << "Credits this semester: ";
  cin >> credits;
  cout << "GPA: " ;
  cin >> gpa;
  grad_year = CURRENT_YEAR + 2;
  cout << "=== Student Card ===" << endl; 
  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl; 
  cout << "GPA: " << gpa << endl; 
  cout << "Credits taking this semester: "<< credits << endl;
  cout << "Graduation Year: " << grad_year << endl;
  

 
  return 0;
}
