#include <iostream>
class object
{
private:
    static int s_num;
public:
    object()
    {
        s_num = s_num + 1;
    }
    static int getSerialNumber()
    {
        return s_num;
    }
};
int object::s_num = 0;
int main()
{
    object d1, d2, d3, d4;
    std::cout << "The current value of serial number is " << object::getSerialNumber() << "\n";
    return 0;
}