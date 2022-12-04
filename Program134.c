#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char *str, char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("please enter the character :\n");
    scanf(" %c",&cValue);

    bRet = CheckChar(Arr,cValue);

    if(bRet == true)
    {
    printf("Character is present in string\n");
    }
    else
    {
    printf("Character is not present in string\n");
    }
    return 0;
}