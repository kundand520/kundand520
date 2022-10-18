#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	printf("Enter the value n\n");
	scanf("%d",&n);
	
	for(i=1;i<=20;i++)
	{
		if(i%2==1)
		continue;
		
		printf("%d\t",i);
	}
}
