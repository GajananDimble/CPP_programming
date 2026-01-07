#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        void fun()
        {
            cout<<"Inside base fun\n";
        }
        void gun()
        {
            cout<<"Inside base gun\n";
        }
        void sun()
        {
            cout<<"Inside base sun\n";
        }
        void bun()
        {
            cout<<"Inside base bun\n";
        }

};
class Derived:public Base
{
    public:
      int x;
      void gun()
        {
            cout<<"Inside Derived gun\n";
        }
        void sun()
        {
            cout<<"Inside Derived sun";
        }
        void run()
        {
            cout<<"Inside Derived run";
        }
        void mun()
        {
            cout<<"Inside Derived mun";
        }
};

int main()
{
    Base *bp1=new Base();               //No casting
    Derived *dp1=new Derived();         //No casting
    Base *bp2=new Derived();            //Up casting
    Derived *dp2=new Base();            //Down casting   ERROR

    return 0;
}