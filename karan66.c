#include<stdio.h>
#include<conio.h>
int main() 
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=10;i<=(n/2);i++)
    {
    if(n%i==0)
    count++;
    }
    if(count==0)
    printf("yes");
    else
    printf("no");
	return 0;
}
