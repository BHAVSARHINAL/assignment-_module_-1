#include<stdio.h>
int main()
{
	
char ch;
printf("enter any charactor");
scanf("%c",&ch);



if( (ch>='A') && (ch<='Z'))
  {
  printf(" \n\n this is a capital later");
}
  else if((ch>='a') && (ch<='z'))
 {
    printf(" \n\n this is a small later");
}
   else if((ch>='0')&& (ch<='9'))
   {
   	printf("this is a digit");
   }
   return 0;






}