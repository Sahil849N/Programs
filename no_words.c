

/* COUNT NUMBER OF WORDS IN STRING BY PASSING STRING INTO FUNCTION*/

#include<stdio.h>
int count(char str[])
{
    int c=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            c++;
        }
    }
    c=c+1;
    return c;
}
int main()
{
    char str[15];
    printf("Enter String : ");
    gets(str);
    int c=count(str);
    printf("Words : %d\n",c);
    return 0;
}