#include<iostream>

int &larger(int &a,int &b)
{
    if (a>b)
    return a;
    else
    return b;
}
int main()
{
    int temp1,temp2,value;
    std::cout<<"Print first temperature: ";
    std::cin>>temp1;
    std::cout<<"Print second temperature: ";
    std::cin>>temp2;
    std::cout<<"The value of temp: ";
    std::cin>>value;
    larger(temp1,temp2)=value;
    std::cout<<"The 1st temp= "<<temp1<<"\n";
    std::cout<<"The 2nd temp= "<<temp2;
    return 0;

    
    
    }