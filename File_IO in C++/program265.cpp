#include<iostream>
using namespace std;

template<class T>
T Add(T No1,T No2)
{
    T Ans;
    Ans =No1+No2;
    return Ans;
}

double Maximum(double No1,double No2)
{
    if(No1>No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }
}
int main()
{
    double dvalue1=10.5,dvalue2=11.5,dRet=0.0;

    dRet=Maximum(dvalue1,dvalue2);
    cout<<"Maximum :"<<dRet<<"\n";

    return 0;
}