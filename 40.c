#include<stdio.h>
void main()
{
int n,a=1,b=1,c;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("%d ",a);
c=a+b;
a=b;
b=c;
}
}