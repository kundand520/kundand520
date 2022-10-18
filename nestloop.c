#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,mul=1;
	printf("enter the value of n\n");
	scanf("%d",&n);
	
	Test: mul=mul*i;
	i++;
	
	if(i<=n)
	{	
		goto Test;
    }
    
    printf("%d * %d = %d ",mul);
}
