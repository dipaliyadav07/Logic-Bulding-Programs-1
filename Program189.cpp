#include<iostream>
using namespace std;

class Arithmatic
{
    public:                             //Access Specifier
        int iNo1 = 0, iNo2 = 0;      //Characteristics

        Arithmatic()                //Default Constructor
        {
            iNo1 = 0;       
            iNo2 = 0;
        }

        Arithmatic(int A, int B)
        {
            iNo1 = A;
            iNo2 = B;
        }

        int Addition()
        {
            int iAdd = 0;
            iAdd = iNo1 + iNo2;
            return iAdd;
        }
};

int main()
{
    int iRet = 0;

    Arithmatic obj1;
    Arithmatic obj2(10,11);
    Arithmatic obj3(20,21);

    iRet = obj1.Addition();         //0
    cout<<"Addition is : "<<iRet<<"\n";

    iRet = obj2.Addition();         //21
    cout<<"Addition is : "<<iRet<<"\n";
    
    iRet = obj3.Addition();         //41
    cout<<"Addition is : "<<iRet<<"\n";

    return 0;
}