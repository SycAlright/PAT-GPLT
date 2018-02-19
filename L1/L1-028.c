/**
 * PAT-GPLT L1-028
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int N;
	scanf("%d", &N);
	int i;
	int arr[10];
	for(i = 0; i<N; i++)
	{
		scanf("%d", &arr[i]);
	}
	int j;
	int flag=0;
	for(i = 0; i<N; i++)
	{
		if(arr[i]==1)
			printf("No\n");
		else
		{
			flag = 0;
			for(j = 2; j<=sqrt(arr[i]); j++)
			{
				if(arr[i]%j==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
				printf("No\n");
			else
				printf("Yes\n");
		}
	}
	return 0;
}