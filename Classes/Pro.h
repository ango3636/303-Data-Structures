#ifndef PROF_H
#define PROF_H
#include "Employee.h"

class Professional : public Employee {
  public:
    int monthlySalary (int years);
    int healthPlus (int salary);
    int vacationTime(int years);

    void input();
    void output();
};

#endif