#include<iostream>
using namespace std;


int Add(int No1,int No2)
{
    int Ans;
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