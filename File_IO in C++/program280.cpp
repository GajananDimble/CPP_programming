//OOP approach(Generic)

#include<iostream>
using namespace std;

int Addition(int No1,int No2)
{
    int Ans=0;
    Ans=No1+No2;
    return Ans;
}
template<class T>

class Arithmetic
{
    public:
       T No1;
       T No2;

    Arithmetic(T A, T B)
    {
        No1=A;
        No2=B;
    }   
    T Addition()
    {
        T Ans=0;
        Ans=No1+No2;
        return Ans;
    }
    T Substraction()
    {
        T Ans=0;
        Ans=No1-No2;
        return Ans;
    }
};
int main()
{
    Arithmetic <int>aobj1(25,10);     
    Arithmetic <double>aobj2(101.5,50.3);    


    cout<<aobj1.Addition()<<"\n";
    cout<<aobj1.Substraction()<<"\n";

    cout<<aobj2.Addition()<<"\n";
    cout<<aobj2.Substraction()<<"\n";


    return 0;
}