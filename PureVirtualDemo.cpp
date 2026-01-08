#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        int Addition(int a,int b)
        {
            return a+b;    //comcrete
        }
        virtual int Substraction(int a,int b)=0;   //Abstract
};

#pragma pack(1)
class Derived:public Base
{
    public:
      int x;
      
};

int main()
{

    Base *bp=new Derived();            //Up casting

   
  
    return 0;
}