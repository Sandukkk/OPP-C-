#include<iostream>

class inform
{
  private:
  int employee_id;
  int bonus;
  int overtime;  
  public:
  void setpara(int, int , int);
  void displayReport();

};
int main()
{
    
    int e_id,b,t,i,n;
    // std::cout<<"total number of employees= ";
    // std::cin>>n;
    inform e[n];
    
for(i=0;i<=n;i++)
{
    std::cout<<"enter employee id= ";
    std::cin>>e_id;
      std::cout<<"enter bonus= ";
    std::cin>>b;
      std::cout<<"enter overtime= ";
    std::cin>>t;
    e[i].setpara(e_id,b,t);

}
for (i=0;i<=n;i++)
{
    e[i].displayReport();
}

}
void inform::setpara(int employee_id, int bonus, int overtime)
{
    this->employee_id = employee_id;
    this->bonus = bonus;
    this->overtime = overtime;
}

void inform::displayReport()
{
    int year;
    std::cout<<"Enter year= ";
    std::cin>>year;
    std::cout << "An employee with employee id " << this->employee_id << " has received Rs." << this->bonus << " as a bonus and had worked " << this->overtime << " hours as overtime in " <<year<< "\n";
}