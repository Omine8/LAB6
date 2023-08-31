#include<math.h>
#include<stdio.h>
int main(){
double a,b,c;
double r1,r2,r,rp,ip;
printf("THE EQUATION IS ax2+bx+c\n");
printf("Enter the value of a :");
scanf("%lf",&a);
printf("Enter the value of b :");
scanf("%lf",&b);
printf("Enter the value of c :");
scanf("%lf",&c);

double d= (b*b)-(4*a*c);

if(d>0)
{
printf("The roots are real & unequal\n");
r1=(-b+ sqrt(d))/(2*a);
r2=(-b- sqrt(d))/(2*a);
printf("The roots are %.2lf and %.2lf\n",r1,r2);
}
else if(d==0)
{
printf("The roots are real & equal\n");
r=-b/(2*a);
printf("The roots are %.2lf both\n",r);
}
else
{
printf("The roots are imaginary\n");
rp=-b/(2*a);
ip=sqrt(-d)/(2*a);
printf("Root1= %.2lf+i%.2lf \n Root2= %.2lf-i%.2lf\n",rp,ip,rp,ip);
}
}

