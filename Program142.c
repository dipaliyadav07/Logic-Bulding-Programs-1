#include<stdio.h>

void strToggleX(char *str)
{
    while(*str != '\0' )
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Please enter string :\n");
    scanf("%[^'\n']s",Arr);

    strToggleX(Arr);  

    printf("Toggled string is : %s\n",Arr);

    return 0;
}