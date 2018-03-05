#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,m;
scanf("%d%d",&n1,&n2);
m=n1;
n1=n2;
n2=m;
printf("%d\n%d\n",n1,n2);
return 0;
}
