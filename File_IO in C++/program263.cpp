#include<iostream>
using namespace std;

template<class T>
T Add(T No1,T No2)
{
    T Ans;
    Ans =No1+No2;
    return Ans;
}
int main()
{
    int ivalue1=10,ivalue2=11,iRet=0;
    float fvalue1=10.5f,fvalue2=11.23f,fRet=0.0f;
    double dvalue1=10.0,dvalue2=11.0,dRet=0.0;


    iRet=Add(ivalue1,ivalue2);
    cout<<"Addition of int:"<<iRet<<"\n";

    fRet=Add(fvalue1,fvalue2);
    cout<<"Addition of float:"<<fRet<<"\n";

    dRet=Add(dvalue1,dvalue2);
    cout<<"Addition of double:"<<dRet<<"\n";


    return 0;
}