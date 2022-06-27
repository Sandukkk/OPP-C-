#include<iostream>

class prime
{
private:
int num;
public:
void setnum(int n)
{
    num=n;
}
bool getnum()
{
    int i;
    for(i=2;i<num;i++)
    {
        if(num % i==0)
        {
            return(false);
        }
    }
            return(true) ;
        
    
}
};
int main()
{
    prime p;
    int n1,i,s;
    char string='y';
   
    while(true)
    {
        std::cout<<"enter a number: ";
        std::cin>>n1;
         p.setnum(n1);
        /* for(i=2;i<n1;i++){
             if(n1 % i==0){
                 s+=1;
             }*/
         
            
            s=p.getnum();
if(s==true){
                std::cout<<"a prime";
            }
            else
            {
                std::cout<<"not a prime ";
            }
        std::cout<<"\n"<<"do you want to continue? ";
        std::cin>>string;
        if(string=='y')
        {
            p.getnum();
        }
        else{
            break;
        }

    }
}
    
