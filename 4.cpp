#include<iostream>
class compare
{
private:
int a,b;
public:
compare()
{
    a=0;
    b=0;
}
compare(int x,int y)
{
    a=x;
    b=y;
}
int operator ==(compare &e)
{
    if(this->a==e.b)
    {
return (true);
}
else{
    return (false);
}
}
int operator <(compare &e)
{
if(this->a<e.b)
    {
return (true);
}
else{
    return (false);
}
}
};
int main()
{
compare c1(1,1);
compare c2(2,4);

}