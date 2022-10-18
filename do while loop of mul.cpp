#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,mul=1;
	
	printf("Enter the value");
	scanf("%d",&n);
	
	i=1;
	do
	{
	
	mul=mul*i;
	i++;
}	while
		(i<=n);
	
	printf("mul = %d",mul);
	
}
