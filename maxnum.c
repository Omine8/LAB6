#include<stdio.h>

int main(){
int a,b;
printf("Enter 1st Number : ");
scanf("%d",&a);
printf("Enter 2nd Number : ");
scanf("%d",&b);
if(a>b)
{
printf("%d is the largest number\n",a);
}
else if(a==b)
{
printf("Both the numbers are equal\n");
}
else
{
printf("%d is the largest number\n",b);
}
}
