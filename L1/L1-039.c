/**
 * PAT-GPLT L1-039
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <string.h>
int main()
{
	int N, m;
	char s[1001], a[101][1001];
	scanf("%d", &N);
	getchar(); //防止回车被Gets 
	gets(s);
	int l=strlen(s), t=0;
	m=(l+N-1)/N; //和下面两行一样的效果
	int i, j;
	for(j=m-1; j>=0; j--)
	{
		for(i=0; i<N; i++)
		{
			if(t<l) a[i][j]=s[t++];
			else a[i][j]=' '; //不足的补空格
		}
	}
	for(j=0; j<N; j++)
	{
		for(i=0; i<m; i++)
			printf("%c",a[j][i]);
		printf("\n");
	}
	return 0;
}