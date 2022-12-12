#include<stdio.h>
#include<math.h>
int ps(int n)
{
int a;
a=sqrt(n);
return(a*a==n);
}
main()
{
int n,ps(int);
printf("enter any no\n");
scanf("%d",&n);
if(ps(n))
printf("perfect square\n");
else
printf("not perfect square\n");
}

/* output

enter any no
49
perfect square  */

