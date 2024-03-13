#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,i=0,k=1;
    printf("Enter the size\n");
    scanf("%d",&size);
    int n[size];
    printf("Enter the numbers\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d ",&n[i]);
        k++;
    }
    int res=(k*(k+1))/2;
    printf("Sum = %d\n",res);
    return 0;
}