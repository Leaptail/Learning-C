#include <stdio.h>
int main()
{
	int num1=0,num2=0,bignum;
	printf("enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	while(num1!=0||num2!=0)
	{
	  bignum=BiggerNum(num1,num2);
	  printf("the bigger number is %d",bignum);
	  printf("\nEnter two numbers: ");
	  scanf("%d %d",&num1,&num2);
	}
	printf("program ended");
}

int BiggerNum(int a,int b) //int means will return an int
{
	if(a>b) return a;
	else return b;
}
