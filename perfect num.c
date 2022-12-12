
#include<stdio.h>
int perfect(int n)
{
int sum=0,i;
{
for(i=1;i<=n/2;i++)
if(n%i==0)
sum+=i;
}
return(n==sum);
}
main()
{
int n,perfect(int);
printf("enter any no\n");
scanf("%d",&n);
if(perfect(n))
printf("perfect no\n");
else
printf("not perfect no");
}

/* output
enter any no
6
perfect no */
