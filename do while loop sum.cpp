#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,sum=0;
	
	printf("Enter the value");
	scanf("%d",&n);
	
	i=1;
	do
	{
	
	sum=sum+i;
	i++;
}	while
		(i<=n);
	
	printf("sum = %d",sum);
	
}
