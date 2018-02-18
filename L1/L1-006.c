/**
 * PAT-GPLT L1-006
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <math.h>
int main()
{
	int i, n, len, start;
	scanf("%d", &n);
	int max;
	max=sqrt(n); //开平方 
	for(len=12; len>=1; len--)
	{
		for(start=2; start<=max; start++)
		{
			long long int ans=1;
			for(i=start; i-start<=len-1; i++)
			{
				ans*=i;
			}
			if(n%ans == 0)
			{
				printf("%d\n%d", len, start);
				for(i=start+1; i-start<=len-1; i++)
				{
					printf("*%d", i);
				}
				return 0;
			}
		}
	}
	printf("1\n%d", n);
	return 0;
}