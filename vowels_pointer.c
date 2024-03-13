
/* COUNT HOW MANY VOWEL AND CONSONANTS ARE AVAILABLE IN STRING BY 
    PASSING STRING INTO FUNCTION USING POINTER*/


#include<stdio.h>
void count(char *p)
{
    int c1=0,c2=0;
    while(*p!='\0')
    {
        if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||*p=='a'||*p=='e'|*p=='i'||*p=='o'||*p=='u')
        {
            c1++;
        }
        else{
            c2++;
        }
        p++;
    }
    printf("Vowels : %d\nConsonants : %d\n",c1,c2);
}
int main()
{
    char str[10];
    printf("Enter the alphabets\n");
    gets(str);
    count(str);
    return 0;
}