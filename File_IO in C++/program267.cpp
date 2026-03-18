#include<iostream>
using namespace std;

template<class T>
T Maximum(T No1,T No2, T No3)
{
    if(No1>No2 && No1>No3)
    {
        return No1;
    }
    else if(No2>No1 &&  No2>No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
}
int main()
{
    double dvalue1=23.5,dvalue2=11.5,dvalue3=21.5,dRet=0.0;

    dRet=Maximum(dvalue1,dvalue2,dvalue3);
    cout<<"Maximum :"<<dRet<<"\n";

    return 0;
}