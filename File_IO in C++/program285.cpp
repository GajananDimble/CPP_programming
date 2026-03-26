#include<iostream>
using namespace std;

void Display()
{ 
    int iCnt=0;                                  //Auto storage class
    cout<<"jay Ganesh...\n"<<iCnt<<"\n";
    iCnt++;
    Display();
}
int main()
{
    Display();
    
    return 0;
}