#include<stdio.h>
int main()
{
	char sh;
	printf("enter any alphabet");
	scanf("%c",&sh);
	if(sh=='a'||sh=='e'||sh=='i'||sh=='o'||sh=='u')
	{
		printf("alphabet is a vowel..!");
	}
	else
	{
		printf("alphabet is a consonant") ;
	
	}
	return 0;
}