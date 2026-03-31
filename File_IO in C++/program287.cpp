#include<iostream>
using namespace std;

void Display()
{ 
    static int iCnt=0;                                  //Static storage class
    cout<<"jay Ganesh...\n"<<iCnt<<"\n";
    iCnt++;
    Display();
}
int main()
{
    Display();
    
    return 0;
}