//OOP approach(Specific)

#include<iostream>
using namespace std;

int Addition(int No1,int No2)
{
    int Ans=0;
    Ans=No1+No2;
    return Ans;
}
class Arithmetic
{
    public:
       int No1;
       int No2;

    Arithmetic(int A, int B)
    {
        No1=A;
        No2=B;
    }   
    int Addition()
    {
        int Ans=0;
        Ans=No1+No2;
        return Ans;
    }
    int Substraction()
    {
        int Ans=0;
        Ans=No1-No2;
        return Ans;
    }
};
int main()
{
    Arithmetic aobj1(25,10);
    Arithmetic aobj2(101,50);


    cout<<aobj1.Addition()<<"\n";
    cout<<aobj1.Substraction()<<"\n";

    cout<<aobj2.Addition()<<"\n";
    cout<<aobj2.Substraction()<<"\n";


    return 0;
}