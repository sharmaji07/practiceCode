#include<stdio.h>
#include<conio.h>
#define f(x) (x*x*x)-4*x-9
main()
{
	float a=0,b=1,mid;
	int counter=0;
	
	while((f(a))*(f(b))>0)
	{
		a++;
		b++;
	}
	
	printf("Value of f(a) is %f\n",f(a));
	printf("Value of f(b) is %f\n",f(b));
	mid=(a+b)/2;
	
	while(counter<10)
	{
		if((f(a))*(f(mid))>0)
		{
			a=mid;
		}
		else
		{
			b=mid;	
		}
		mid=(a+b)/2;
		printf("%f\n",mid);
		counter++;
	}
	
}
