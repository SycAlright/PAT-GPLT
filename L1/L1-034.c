/**
 * PAT-GPLT L1-034
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int arr[1001] = {0};
	int i, j, K, num;
	for (i=0; i<N; i++)
	{
		scanf("%d", &K);
		for (j=0; j<K; j++)
		{
			scanf("%d", &num);
			arr[num]++;
		}
	}
	int maxIndex=0, maxValue=0;
	for (i=0; i<1001; i++)
	{
		if (arr[i]>=maxValue)
		{
			maxValue=arr[i];
			maxIndex=i;
		}
	}
	printf("%d %d", maxIndex, maxValue);
	return 0;
}