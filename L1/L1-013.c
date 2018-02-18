/**
 * PAT-GPLT L1-013
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i, sum=0, k, temp;
	for(i=1; i<=n; i++)
	{
		temp=1;
		for(k=1; k<=i; k++)
		{
			temp*=k;
		}
		sum+=temp;
	}
	printf("%d", sum);
	return 0;
}