#include<stdio.h>

int main(){
char ch;
printf("Enter the letter : ");
scanf("%c",&ch);
if(ch>=97 && ch<=123)
{
ch = ch - 32;
printf("The Uppercase of the entered letter is : '%c'\n",ch);
}
else if(ch>=65 && ch<=91)
{
printf("You have entered ‘%c’ which is already in upper case\n",ch);
}
else
{
printf("INVALID ENTRY");
}
}
