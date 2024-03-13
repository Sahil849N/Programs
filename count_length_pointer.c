

//  COUNT LENGTH OF STRING BY PASSING INTO FUNCTION USING POINTER

#include<stdio.h>
int length(char *p)
{
    int count=0;
    while(*p!='\0')
    {
        count++;
        p++;
    }
    return count;
}
int main()
{
    char str[10];
    printf("Enter the string : ");
    gets(str);
    int l=length(str);
    printf("Length : %d\n",l);
    return 0;
}