#include<iostream>
using namespace std;

template<class T>
T Add(T No1,T No2)
{
    T Ans;
    Ans =No1+No2;
    return Ans;
}

int Maximum(int No1,int No2)
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
    int ivalue1=10,ivalue2=11,iRet=0;

    iRet=Maximum(ivalue1,ivalue2);
    cout<<"Maximum :"<<iRet<<"\n";

    return 0;
}