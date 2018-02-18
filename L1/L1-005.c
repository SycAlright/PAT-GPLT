/**
 * PAT-GPLT L1-005
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, n, m, k, cj[1001], jh[1001], zh[1001];
	char zk[1001][14];
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%s %d %d", &zk[i][14], &jh[i], &zh[i]);
	}
	scanf("%d", &m);
	for(j=0; j<m; j++)
	{
		scanf("%d", &cj[j]);
	}
	for(j=0; j<m; j++)
	{
		for(i=0; i<n; i++)
		{
			if(jh[i] == cj[j])
			{
				for(k=0; k<14; k++)
					printf("%c", zk[i+1][k]);
				printf(" %d\n", zh[i]);
			} 
		}	
	}
	return 0;
}