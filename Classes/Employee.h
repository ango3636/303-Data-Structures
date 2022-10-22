#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee{
  protected:
    int total_salary;
    int hours_worked;
    int hourly_rate;
    int years;
  public:
    Employee();

    void setYears(int years);
    int getYears();

    void setHours(int hours);
    int getHours();

    void setRate(int rate);
    int getRate();

    int weeklySalary ();
    int healthPlus ();
    int vacationTime();

    void inputs();
};

#endif