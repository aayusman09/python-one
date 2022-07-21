#include <stdio.h>
void main()
{
float u,a,t,v,s;
printf("\n enter the initial velocity:");
scanf("%f",&u);
printf("\n enter the acceleration:");
scanf("%f",&a);
printf("\n enter time required:");
scanf("%f",&t);
v=u*t^2;
s=u*t+(1/2)*a*t^2;
printf("\n the final velocity is: %f",v);
printf("\n in the distance travelled is : %f",s);
}
