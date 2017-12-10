#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,f;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
f=1;
break;
}
}
if(f==1)
{
printf("not a prime number");
}
else
{
printf("prime number");
}
getch();
}
