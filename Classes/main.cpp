#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include "Employee.h"
#include "Pro.h"
#include "Nonpro.h"
using namespace std;

int main() {
  Professional employee1;
  Nonprofessional employee2;

int x;
  cout << "\nHello user!" << "\nAre you a Professional or NonProfessional Employee?" << "\nIf Pro, Enter 1, if Non-Pro, Enter 2: ";
  cin >> x;
  cout << endl << endl;
  if(x == 1){
    employee1.input();
    employee1.output();
  }
  else if(x== 2){
    employee2.input();
    employee2.output();
  }
}