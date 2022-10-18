#include<stdio.h>
#include<conio.h>
main()
{
	int A[1000],n,i,max;
	
	printf("Enter the Value");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter Elements");
		scanf("%d",&A[i]);
		
		for(i=0;i>n;i++)
		{
			if(A[i]>max)
			{
				max=A[i];
			}
		}
		printf("Largest number=%d",max);
		}
	}
