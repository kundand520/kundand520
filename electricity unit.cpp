#include<stdio.h>
#include<conio.h>
main()
{
	float elec_unit,elec_bill;
	printf("Enter Electricity unit");
	scanf("%f",&elec_unit);
	
	if(elec_unit>50)
{	
	elec_bill=elec_unit*0.50;
}
else if(elec_unit>100)
{
	elec_bill=elec_unit*0.75;
}
else if(elec_unit>150)
{
	elec_bill=elec_unit*1.20;
}
else
{
	elec_bill=elec_unit*1.50;
}
   printf("Electricity bill is %f",elec_bill);
}

