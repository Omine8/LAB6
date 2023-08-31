#include<stdio.h>

int main(){
char ch;
printf("Enter an alphabet : ");
scanf("%c",&ch);
if((ch>=97 && ch<=123) || (ch>=65 && ch<=91))
{
if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
{
printf("The Entered character %c is a vowel\n",ch);
}
else
{
printf("The Entered character %c is a consonant\n",ch);
}
}
else
{
printf("The Entered character %c is not an alphabet\n",ch);
}
}
