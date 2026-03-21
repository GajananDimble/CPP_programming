//OOP approach

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
    Arithmetic aobj(25,10);

    cout<<aobj.Addition()<<"\n";
    cout<<aobj.Substraction()<<"\n";


    return 0;
}