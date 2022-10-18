#include<stdio.h>
#include<conio.h>
main()
{
	float basic_sal,gross_sal;
	printf("Basic Salary of Employee");
	scanf("%f",&basic_sal);
	
	
	if(basic_sal<=10000)
{
	gross_sal=basic_sal+basic_sal*0.2+basic_sal*0.8;
}
 else if(basic_sal<=20000)
{
	gross_sal=basic_sal+basic_sal*0.25+basic_sal*0.9;
}
 else
{

	gross_sal=basic_sal+basic_sal*0.3+basic_sal*0.95;
}
printf("Gross Salary is %f",gross_sal);
}
