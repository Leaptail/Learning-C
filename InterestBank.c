#include <stdio.h>
//program to write to a txt file about my current bank, particularly, liquid, Investments,growth,salary.

int main(int argc, char *argv[])
{
	int liquid=0,inve=0,salary=0, date;
	double growth=0;
	FILE * out = fopen("Bnk.txt","w");
	FILE * in = fopen("Bnk.txt","r");
	if (in==NULL||out==NULL) printf("ERROR Unable to open");
	printf("Enter The numbers liquid/invest/salary/date: \n");
	scanf("%d %d %d %d", &liquid, &inve, &salary, &date);
	
        //read numbers in file and compare the interest rate
	
	//write numbers to file in the next row
	
	//other cool calculations i might want
}
