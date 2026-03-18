#include<iostream>
using namespace std;

template<class T>
T Maximum(T No1,T No2)
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