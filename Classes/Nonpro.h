#ifndef NONPROF_H
#define NONPROF_H
#include "Employee.h"

class Nonprofessional : public Employee {
  public:
    int weeklySalary ();
    int healthPlus ();
    int vacationTime();

    void input();
    void output();
  
};

#endif