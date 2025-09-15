#include<stdio.h>

int main()
{
   int i,num,rem,sum = 0;
   printf("Enter a Number: ");
   scanf("%d",&num);
   while (num!=0)
   {
   	rem= num%10;
   	sum=sum*10+rem;
   	num=num/10;
	} 
    printf("Reverse of the Number is %d",sum);
     
	return 0;
}

