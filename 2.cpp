#include<iostream>
class operation
{
    private:
    int x;
    int y;
    int z;
    public:
          operation()
          {
            x=0;
            y=0;
            z=0;
          }
          operation(int a, int b, int c)
          {
            x=a;
            y=b;
            z=c;
          }
          operation operator +(operation &o)
          {
            this->x=this->x+o.x;
            (this->y=this->y+o.y);
            (this->z=this->z+o.z);
          }
//           operation operator -(operation o2)
//           {
// x=x-o2.x;
// y=y-o2.y;
// z=z-o2.z;
//           }
         

void operators()
 {
     std::cout<<"value of x= "<<x<<"\n"<<"value of y= "<<y<<"\n"<<"value of z= "<<z<<"\n";
 }
};

int main()
{
    operation O1(1,2,3);
    operation O2(2,3,4);
    operation O3;
    O3=O1+O2;
    //operation O4;
    //O3 = O1+O2;
    // O4=O2-O1;
O3.operators();
//O4.operators();
    

}

