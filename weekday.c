#include<stdio.h>

int main(){
int a;
printf("Enter the weekday : ");
scanf("%d",&a);

switch(a)
{
case 0 :
printf("THE DAY IS A SUNDAY\n");
break;

case 1 :
printf("THE DAY IS A MONDAY\n");
break;

case 2 :
printf("THE DAY IS A TUESDAY\n");
break;

case 3 :
printf("THE DAY IS A WEDNESDAY\n");
break;

case 4 :
printf("THE DAY IS A THURSDAY\n");
break;

case 5 :
printf("THE DAY IS A FRIDAY\n");
break;

case 6 :
printf("THE DAY IS A SATURDAY\n");
break;

default :
printf("INVALID WEEKDAY ENTRY!!!");
break;

}
}
 

