#include<stdio.h>

int CountCapital(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("please enter the character :\n");
    scanf(" %c",&cValue);

    iRet = CountCapital(Arr,cValue);

    printf("Frequency of letter is : %d\n",iRet);

    return 0;
}