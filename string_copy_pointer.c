#include<stdio.h>
void copy(char *p1,char *p2)
{
    while(*p1!='\0')
    {
        *p2=*p1;
        p1++;
        p2++;
    }
    *p2='\0';
}
int main()
{
    char s1[10],s2[10];
    printf("Enter the String\n");
    gets(s1);
    copy(s1,s2);
    printf("Copied string : %s",s2);
    return 0;
}