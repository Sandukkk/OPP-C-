#include<iostream>

class depart
{

int id;
char name[30];
public:
depart(int i,char n[])
{

 std::cout<<"Department id: "<<i<<"\n";
    std::cout<<"Department name: "<<n<<"\n";
}    


~depart()
{
    std::cout<<"Object goes out of the scope.";
}
};

int main()
{
    char nam[]="Computer";
depart dp(123,nam);

return 0;

}
