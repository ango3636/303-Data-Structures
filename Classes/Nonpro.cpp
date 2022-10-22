#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include "Nonpro.h"
using namespace std;

int Nonprofessional::monthlySalary(){
  int salary = hours_worked * hourly_rate;
  return salary;
}

//10 percent of salary
int Nonprofessional::healthPlus(){
  int health = (hours_worked * hourly_rate) * 0.10;
  return health;
}

//10 percent of hours worked that week
int Nonprofessional::vacationTime(){
  int vacation = hours_worked * 0.10;
  return vacation;
}

void Nonprofessional:: input(){
  cout << "How many hours have you worked this week? ";
  cin >> hours_worked;
  cout << "Whats your pay rate? ";
  cin >> hourly_rate;
  
  cout << endl<< endl;
}

void Nonprofessional:: output(){
  cout << name << "!"<< endl<< "Your weekly salary is: $"<< monthlySalary(hours_worked, hourly_rate) << endl << "$"<< healthPlus(hours_worked, hourly_rate)<< " went towards your health contributions."<< endl<< "You earned " << vacationTime(hours_worked) << " hours towards your vacation this year!" << endl;
}