#include<iostream>

void DisplaySalary(int salary, int increment=12)
{
    std::cout<<"the salary is: "<<salary*(increment+100)/100<<"\n";
}
int main()
{
int salary_of_chief=35000;
int salary_of_officer=25000;
int salary_of_system=24000;
int salary_of_programmer=18000;
    
    DisplaySalary(salary_of_chief,9);
    DisplaySalary(salary_of_officer,10);
    DisplaySalary(salary_of_system);
    DisplaySalary(salary_of_programmer);
return 0;
}