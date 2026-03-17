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

    iRet=Add(ivalue1,ivalue2);

    cout<<iRet;

    return 0;
}