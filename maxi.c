

/* FIND OUT MAXIMUM AND SECOND MAXIMUM FROM AN ARRAY BY PASSING ARRAY INTO FUNCTION*/

#include<stdio.h>
void maxi(int a[])
{
    int fm=-345555,sm=-345556;
    for(int i=0;i<10;i++)
    {
        if(a[i]>fm)
        {
            sm=fm;
            fm=a[i];
        }
        else{
            if(a[i]>sm&&a[i]!=fm)
            {
                sm=a[i];
            }
        }
    }
    printf("First Maxi : %d\nSecond Maxi : %d\n",fm,sm);
}
int main()
{
    int a[10];
    printf("Enter the 10 numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    maxi(a);
    return 0;
}