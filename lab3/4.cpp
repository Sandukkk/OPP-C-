#include<iostream>

class circle
{
private:
float radius,a,p;
public:

void setradius(float r)
{
    radius=r;
}
float getradius()
{
    return radius;
}

void seta(float area)
{
     a=area;
}
float geta()
{
    return(3.14*radius*radius);
    
}
void setp(float peri)
{
    p=peri;
}
float getp()
{
return(2*radius*3.14);

}
};
int main()
{
circle c;

c.setradius(3.0);

std::cout<<"Area= "<<c.geta()<<"\n"<<"Perimeter= "<<c.getp();

    return 0;
}












// class triangle
// {
// private:
// float s,s;
// public:
// void sets(float side)
// {
//     this->s=side;
// }
// float gets()
// {
//     s1=();
//     return ();
// };
// class rectangle
// {
// private:
// float radius;
// public:
// void setradius(float r)
// {
//     this->radius=r;
// }
// float getradius()
// {
//     return (3.14*radius*radius);
// };
