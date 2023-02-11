//take average from input file and print to output
#include <stdio.h>
int main()
{
	int sum=0,totalnos=0,n=0;
	FILE*in=fopen("/storage/emulated/0/documents/cxxdroid/input.txt","r");
	fscanf(in,"%d",&n);
	while(n!=0)
    {
    	totalnos=++totalnos;
    	sum=sum+n;
    	fscanf(in,"%d",&n);
    }
    printf("The sum is %d\nTotal numbers: %d\nAverage is: %3.2f\n",sum,totalnos,sum/totalnos);
    fclose(in);
}
