#include<stdio.h>
int sod(int n)
{
int sum=0,rem;
while(n>0)
{
rem=n%10;
sum+=rem;
n=n/10;
}
return(sum);
}
main()
{
int n,sod(int);
printf("enter any no\n");
scanf("%d",&n);
printf("sum of the digits=%d\n",sod(n));
}

/* output
enter any no
43
sum of the digits=7  */
