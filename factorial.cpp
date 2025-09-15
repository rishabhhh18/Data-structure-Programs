#include<iostream>
int fact (int n)
{
	if(n>=1)
	{ 
	 return n*fact(n-1);
    }
	else
	{
	 return 1;
    }
}
int main()
{
	printf("factorial=%d",fact(5));
}
