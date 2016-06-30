#include<stdio.h>
#include<conio.h>
void main()
{
int q,p,fact=1;
printf("Enter a number to calculate its factorial\n");
scanf("%d",&p);
for(q=1;q<=p;q++);
fact=fact*q;
printf("factorial of %d=%d\n",p,fact);
getch();
}
