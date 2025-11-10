#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(int i=0; i<=n; i++){
		sum = sum+(i*i);
			printf(" Sum of first %d natural number is: %d \n",i,sum);
	}

	
}