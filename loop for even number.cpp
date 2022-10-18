#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	printf("Enter the number");
	scanf("%d",&n);
	
	for(i=2;i>=n;i+2)
	{
		printf("%d\n",i);
	}
}
