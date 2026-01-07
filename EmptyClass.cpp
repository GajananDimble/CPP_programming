#include<iostream>
using namespace std;

class Demo
{
    public:
       void display()
       {
        cout<<"Inside display\n";
       }
};
int main()
{
    Demo dobj;
    cout<<sizeof(dobj);      //1byte
    return 0;
}