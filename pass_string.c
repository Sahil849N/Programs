

//PASS STRING INTO FUNCTION USING POINTER

#include<stdio.h>
void print(char *p)
{
    printf("String contains\n");
    while(*p!='\0')
    {
        printf("%c",*p);
        p++;
    }
}
int main()
{
    char str[10];
    printf("Enter the string\n");
    gets(str);
    print(str);
    return 0;
}