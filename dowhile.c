#include<stdio.h>
int fun(int a,int b)
{
	char sum='y';
	
	do
	{
	
	
	printf("enter your choice");
	scanf("%c",&sum);
	switch(sum)
	{
		case '+':printf("%d",a+b);
		break;
		case '-':printf("%d",a-b);
		break;
		case '*':printf("%d",a*b);
		break;
		case '/':printf("%d",a/b);
		break;
		
		default: printf("invalid choice");
	}
		printf("do you want to continue(y/n)");
		scanf("%c",&sum);
	}
	while(sum=='y');
	
		
	return 0;
	
	
}