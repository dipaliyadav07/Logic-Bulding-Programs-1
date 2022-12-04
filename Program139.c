#include<stdio.h>

char CharToggleX(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return ch - 32;
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        return ch + 32;
    }
    else
    {
        return ch;
    }
}

int main()
{
    char cValue = '\0', cRet = '\0';

    printf("Enter the character: \n");
    scanf("%c",&cValue);

    cRet = CharToggleX(cValue);

    printf("Toggled character is : %c\n",cRet);

    return 0;
}