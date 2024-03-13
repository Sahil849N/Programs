

/* CONVERT LOWER CASE INTO UPPER CASE AND UPPER CASE INTO LOWER CASE BY PASSING STRING INTO FUNCTION*/

#include<stdio.h>
void convert(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else{
            if(str[i]>=97 && str[i]<=122)
            {
                str[i]=str[i]-32;
            }
        }
    }
    printf("Converted String is : %s",str);
}
int main()
{
    char str[10];
    printf("Enter the string\n");
    gets(str);
    convert(str);
    return 0;
}