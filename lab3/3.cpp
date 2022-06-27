#include<iostream>

class carpark
{
private:
int car_id ,charge;
float Time;
public:
void setcar_id(int id)
{
car_id=id;
}
int getcar_id()
    {
        return(car_id);
    }
void setTime(float t)
{
  Time=t;
}
float getTime()
{
    return(Time);
}
void setcharge(int c)
{
    charge=c;
    }
    int getcharge()
    {
        return(100*Time);
    }
};
int main()
{
carpark car;
int c1;
float t1;
std::cout<<"Enter car id: ";
std::cin>>c1;
car.setcar_id(c1);
std::cout<<"Enter parked time: ";
std::cin>>t1;
car.setTime(t1);

std::cout<<"car id= "<<car.getcar_id()<<std::endl;
std::cout<<"total time in hours= "<<car.getTime()<<std::endl;
std::cout<<"For Rs. 100 per hour, total charge= "<<car.getcharge();

 return 0;
}