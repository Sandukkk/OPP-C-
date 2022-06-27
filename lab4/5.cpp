#include<iostream>
 class sand
 {
    public:
    void show1() const{
        std::cout<<"Good morning"<<"\n";

    }
    void show2()
    {
        std::cout<<"Good afternoon"<<"\n";

    }
 };
 int main()
 {
    sand s1;
    const sand s2;
    s1.show1();
    s1.show2();
    s2.show1();
    //s2.show2(); //error
    return 0;

 }