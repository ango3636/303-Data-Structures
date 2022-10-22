#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include "Employee.h"

using namespace std;

Employee::Employee(){
  total_salary = 0;
  hours_worked = 0;
  hourly_rate = 0;
  years = 0;
}

void Employee::setYears(int years){
  this->years = years;
}

int Employee::getYears(){
  return years;
}

void Employee::setHours(int hours){
  hours_worked = hours;
}

int Employee::getHours(){
  return hours_worked;
}

void Employee::setRate(int rate){
  hourly_rate = rate;
}

int Employee::getRate(){
  return hourly_rate;
}

int Employee::weeklySalary(){
  int salary = hours_worked * hourly_rate;
  return salary;
}

//10 percent of salary
int Employee::healthPlus(){
  int health = (hours_worked * hourly_rate) * 0.10;
  return health;
}

//10 percent of hours worked that week
int Employee::vacationTime(){
  int vacation = hours_worked * 0.10;
  return vacation;
}

void Employee::inputs(){
  cout << "How many years have you worked with the company? " ;
  cin >> years;
  cout << endl << "How many hours have you worked this week?";
  cin >> hours_worked;
}
