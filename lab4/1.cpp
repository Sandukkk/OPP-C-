#include<iostream>
#include<iomanip>
class date
{
private:
int minute,hour,seconds;
   public:
   

date()
{ 
    
    std::cout<<"hour= ";
    std::cin>>hour;
    std::cout<<"minute= ";
    std::cin>>minute;
    std::cout<<"seconds= ";
    std::cin>>seconds;
if(seconds>=60)
{
    minute=minute+1;
    seconds=seconds-60;
}
if(minute>=60)
{
    hour=hour+1;
    minute=minute-60;
}
}
   void show()
{
    if(hour>=12)
    {

hour=hour-12;
std::cout<<"Time(24 hours)= "<<std::setw(2)<<hour<<":"<<std::setw(2)<<minute<<":"<<std::setw(2)<<seconds;
}
else{
    std::cout<<"Time(12 hours)= "<<std::setw(2)<<hour<<":"<<std::setw(2)<<minute<<":"<<std::setw(2)<<seconds;
}

}
};
int main()
{
    
date t1;
t1.show();
return 0;
}