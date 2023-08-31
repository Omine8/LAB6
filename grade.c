#include<stdio.h>

int main(){
int m;
printf("Enter the total marks secured by a student: ");
scanf("%d",&m);
if(m>=90 && m<=100)
{
printf("Student Grade is O\n");
}
else if(m>=80 && m<=89)
{
printf("Student Grade is E\n");
}
else if(m>=70 && m<=79)
{
printf("Student Grade is A\n");
}
else if(m>=60 && m<=69)
{
printf("Student Grade is B\n");
}
else if(m>=50 && m<=59)
{
printf("Student Grade is C\n");
}
else if(m>=40 && m<=49)
{
printf("Student Grade is D\n");
}
else if(m<40 && m>=0)
{
printf("Student Grade is F\n");
}
else
{
printf("Entered Marks is Invalid\n");
}
}
