#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e,per;
	printf("Enter the 5 subjects marks");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	per=(a+b+c+d+e)/5;
	if(per>=90)
{
	printf("Grade A");
}	
	else if(per>=80)
{
	printf("Grade B");
}
	else if(per>=70)
{
	printf("Grade C");
}
	else if(per>=60)
{
	printf("Grade D");
}
	else if(per>=40)
{	
	printf("Grade E");
}
	else
{
	printf("Grade F");
}
getch();	
}
