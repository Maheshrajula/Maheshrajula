#include<stdio.h>
int prime(int n)
{
int i;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
return(0);
}
return(1);
}
main()
{
int n,prime(int);
printf("enter any no\n");
scanf("%d",&n);
if(n<2)
printf("invalid\n");
else
if(prime(n))
printf("prime no\n");
else
printf("not prime\n");
}

/* output
enter any no
7
prime no  */
