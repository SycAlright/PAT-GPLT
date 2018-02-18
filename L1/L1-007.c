/**
 * PAT-GPLT L1-007
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
int main()
{
	int a[10], n, i=0, j; 
	scanf("%d", &n);
	if(n<0)
	{
		printf("fu ");
		n=abs(n);
	}
	while(n)
	{
		a[i]=n%10;
		i++;
		n/=10;
	}
	--i; //循环-1 
	do
	{
		switch(a[i])
		{
			case 0:
				printf("ling");
				break;
			case 1:
				printf("yi");
				break;
			case 2:
				printf("er");
				break;
			case 3:
				printf("san");
				break;
			case 4:
				printf("si");
				break;
			case 5:
				printf("wu");
				break;
			case 6:
				printf("liu");
				break;
			case 7:
				printf("qi");
				break;
			case 8:
				printf("ba");
				break;
			case 9:
				printf("jiu");
				break;
		}
		if(i>0)
			printf(" ");
		i--;
	}
	while(i>=0);
	return 0;
}