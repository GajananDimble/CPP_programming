#include<iostream>
using namespace std;

template<class T>

int CountFrequency(T Arr[],int iSize,T No)
{
    int iCnt=0;
    int iCount=0;


    for(iCnt=0;iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt]==No)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    float Brr[]={10.5f,20.2f,30.3f,40.4f,50.5f,20.2f};
    float iRet =0;

    iRet=CountFrequency(Brr,6,20.2f);

    cout<<"CountFrequency is:"<<iRet<<"\n";

    return 0;
}