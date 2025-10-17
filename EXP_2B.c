/*
Sayyed Shahnawaz
FE Computers
DIV C
UIN 251P028
Roll no. 27
*/
#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter a number=");
    scanf("%d",&a);
    printf("Enter a number=");
    scanf("%d",&b);
    if(a%2==0)
    a++;
    do
    {
    sum=a+sum;
    a=a+2;
    }
    while(a<=b);
    {
    printf("Sum of odd numbers \n%d",sum);
    }
}
