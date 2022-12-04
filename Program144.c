#include<stdio.h>

void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;

        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Please enter string :\n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);   // strlcpyX(100,200)

    printf("Copied string is: %s\n",Brr);
    printf("Original string is : %s\n",Arr);

    return 0;
}