#include<iostream>

class vehical
{
    private:
    int num_vehical;
    int hour;
    int rate;
public:
vehical(int a, int b, int c)
{
    num_vehical=a;
    hour=b;
    rate=c;
}
vehical(vehical &v)
//vehical::vehical(vehical &v)
{
     num_vehical=v.num_vehical;
     hour=v.hour;
     rate=v.rate;
}
 void show_info()
 {
    if (num_vehical<=10)
    {
    std::cout<<"total charge is= "<<rate*hour<<"\n";
    }
    else{
       std::cout<<"total charge is= "<<(rate*hour)*0.9<<"\n";
    }
 }

};
int main()
{
    
    vehical v1(10,2,100);

     v1.show_info();
    vehical v2(v1);
   std::cout<<"The copied values are:"<<"\n";
    v2.show_info();
    return 0;
}