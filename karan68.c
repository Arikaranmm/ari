#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	printf("enter the number:");
	scanf("%d",&no);
	no+=1;
	while(no%10!=0)
	{
		no=no+1;
	}
	printf("\n%d",no);
  return 0;
  }
