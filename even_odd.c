

/* COUNT HOW MANY NUMMBERS ARE EVEN AND HOW MANY NUMBERS ARE ODD IN ARRAY BY PASSING
    ARRAY INTO A FUNCTION*/

#include <stdio.h>
void count(int a[])
{
    int c1 = 0, c2 = 0;
    for (int i = 0; i < 10; i++)
    {
        if(a[i]%2==0)
        c1++;
        else
        c2++;
    }
    printf("Number of even's : %d\nNumber of odd's : %d\n",c1,c2);
}
int main()
{
    int a[10];
    printf("Enter the numbers\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    count(a);
    return 0;
}