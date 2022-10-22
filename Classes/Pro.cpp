#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include "Pro.h"
using namespace std;

int Professional:: monthlySalary(int years){
  int salary =5000;
  if(years<=0){
    salary = 5000;
  }
  else if(years<10){
    salary = (years*100) + 5000;
  }
  else if(years>=10){
    salary = 10000;
  }
  return salary;
}

int Professional::healthPlus(int salary){
  int health = salary * 0.20;
  return health;
}

int Professional:: vacationTime(int years){
  int vacay;

  if(years ==0){
    vacay = 1;
  }
  else if(years<5){
    vacay = years;
  }
  else if(years<=5){
    vacay = 5;
  }
  return vacay;
}

void Professional:: input(){
  cout << "How many years have you worked at this company? ";
  cin >> years;
  cout << endl<< endl;
}

void Professional:: output(){
  cout << "Your monthly salary is: $"<< monthlySalary(years) << endl << "$"<< healthPlus(monthlySalary(years)) << " went towards your health contributions."<< endl<< "You have " << vacationTime(years) << " weeks of vacation this year!" << endl;
}