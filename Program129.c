#include<stdio.h>

int CountCh(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'A'))
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
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCh(Arr);

    printf("Number of frequency of a is : %d\n",iRet);

    return 0;
}