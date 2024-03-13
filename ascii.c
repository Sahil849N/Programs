
/* PRINT ASCII VALUE OF EACH CHARACTER OF STRING BY PASSING STRING INTO FUNCTION*/

#include<stdio.h>
void asci(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        printf(" %c = %d\n",str[i],str[i]);
    }
}
int main()
{
    char str[10];
    printf("Enter the string\n");
    gets(str);
    asci(str);
    return 0;
}