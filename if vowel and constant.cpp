#include<stdio.h>
#include<conio.h>
main()
{
	char n;
	printf("Enter the Character");
	scanf("%c",&n);
	
	if (n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
	{
		printf("Vowel %c",n);
	}
	else
	{
		printf("Consonant %c",n);
	}
}
