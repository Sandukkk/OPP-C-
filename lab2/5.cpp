#include<iostream>

inline void DisplaySalary(float salary)
{
    std::cout<<"your salary is Rs. "<<salary-0.1*salary;

}
int main()
{
    float salary;
    std::cout<<"print your salary: ";
    std::cin>>salary;
     
     DisplaySalary(salary);
     return 0;
}