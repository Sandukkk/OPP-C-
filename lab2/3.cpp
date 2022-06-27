#include<iostream>

namespace square
{
    int num;
    int fun(int n)
    {
        return n*n;
    }
}
namespace cube
{
    int num;
    int fun(int n)
    {
        return n*n*n;
    }
}
int main()
{
    
square::num=2;
cube::num=3;
std::cout<<"the square is "<<square::fun(cube::num)<<"\n";
std::cout<<"the cube is "<<cube::fun(square::num);
return 0;

}
