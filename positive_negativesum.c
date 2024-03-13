

/* SUM OF POSITIVE AND NEGATIVE VALUES AVAILABLE IN ARRAY BY PASSING ARRAY INTO FUNCTION*/

#include<stdio.h>
void sum(int a[])
{
    int s1=0,s2=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]>0)
        s1=s1+a[i];
        else
         if(a[i]<0)
        s2=s2+a[i];
    }
    printf("POSITIVE SUM : %d\nNEGATIVE SUM : %d\n",s1,s2);
}
int main()
{
    int a[10];
    printf("Enter the numbers\n");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    sum(a);
    return 0;
}