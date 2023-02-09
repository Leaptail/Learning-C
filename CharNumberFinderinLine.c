#include <stdio.h>
int main()
{
	int num=0;
	printf("insert words: ");
	char ch=getchar();
	while (ch<'0'||ch>'9') ch=getchar();
	while (ch>='0'&&ch<='9') {
		num = num*10+ch-'0';
		ch=getchar();
		}
	printf("%d",num);
}
