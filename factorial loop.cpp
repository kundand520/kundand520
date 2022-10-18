#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,mul=1;
	printf("Enter the value of n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		mul=mul*i;
	}
	printf("mul = %d",mul);

}
