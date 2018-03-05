#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    printf("enter the word");
    scanf("%d",&i);
    if((i=='a'&&i=='z')||(i=='A'&&i=='Z')||(i=='0'&& i=='9'))
    printf("YES");
    else
    printf("NO");
    return 0;
}
