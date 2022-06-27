#include<iostream>
class celcius
{
    private:
    float ctemp;
    public:
    void setctemp( float c)
    {
        ctemp=c;
    }
float getctemp()
    {
    return((ctemp*(9/5.0))+32);
    }
};
class farheneit
{
    private:
    float ftemp;
    public:
    void setftemp( float f)
    {
        ftemp=f;
    }
    float  getftemp()
    {
    return ((ftemp-32)*(5/9.0));
    }
};
int main()
{
    celcius temp1;
    farheneit temp2;
    float c1,f1;
   
   std::cout<<"enter tempertaure in celcius: ";
   std::cin>>c1;
std::cout<<"enter tempertaure in farheneit: ";
   std::cin>>f1;
    temp1.setctemp(c1);
    temp2.setftemp(f1);
    std::cout<<"Value converted to farheneit is: "<<temp1.getctemp()<<std::endl;
    std::cout<<"Value converted to celcius is: "<<temp2.getftemp();   
    
return 0;

    
}