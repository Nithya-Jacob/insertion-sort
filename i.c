#include<stdio.h>
;
int sort(int *a)
{
int i,j,t;
for(i=1;i<=6;i++)
{
j=i-1;
t=a[i];
while(t<a[j]&&j>=0)

{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=t;
}
return 0;
}


void main()
{
int i;
int a[7]={4,23,43,38,15,10,30};
sort(a);
for(i=0;i<7;i++)
{
printf("%d ",a[i]);
}
}
