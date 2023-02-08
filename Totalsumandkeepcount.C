#include <stdio.h>
//sum and keep track of numbers
int main()
{
	int n=0;
	int totalnos=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	int sum = n+0;
	while(n != 0)
	{
		totalnos = ++totalnos;
		printf("Enter a number: ");
	    scanf("%d",&n);
	    sum=n+sum;
	}
	printf("The total is %d\nNumbers entered: %d",sum,totalnos);
}
