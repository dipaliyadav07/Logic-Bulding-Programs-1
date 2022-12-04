#include<iostream>
using namespace std;

int Addition(int iNo1, int iNo2)
{
    int iAdd = 0;

    iAdd = iNo1 + iNo2;

    return iAdd;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    cout<<"Enter First Value :"<<"\n";
    cin>>iValue1;

    cout<<"Enter Second Value :"<<"\n";
    cin>>iValue2;

    iRet = Addition(iValue1,iValue2);

    cout<<"Addition is : "<<iRet<<"\n";

    return 0;
}