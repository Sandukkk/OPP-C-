#include <iostream>
#include<cstring>
class data
{
    private:
    char *show;

public:
data(int n)
{
    show=new char[30];
}
~data()
{
    delete[] show;
}
void setData(char *a)
{
    strcpy(show,a);
}
void join(char *a)
{
   // char s[50];
    strcat(show,a);
    std::cout<<show;
}
};
int main()
{
    data d1(30);
    data d2(40);
    char value1[]="Engineers are ";
    char value2[]="creatures of great logic.";
    d1.setData(value1);
    //d2.setData(value2);
    d1.join(value2);
    

}
