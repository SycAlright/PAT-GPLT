/**
 * PAT-GPLT L1-008
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <math.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int m;
	m=b-a; //B>=A
	int i, sum=0;
	for(i=0; i<=m; i++)
	{
		if(i%5==0&&i) //5个换行
		{
			printf("\n");
		}
		sum+=a; //和
		printf("%5d", a++);
	}
	printf("\nSum = %d", sum);
	return 0;
}