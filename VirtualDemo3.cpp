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
    Base *bp=new Derived();            //Up casting

    bp->fun();      //Base fun
    bp->gun();      //Base gun
    bp->sun();      //Base sun
   // bp->run();      //Error
   // bp->mun();      //Error
    bp->bun();      //Base bun

    return 0;
}