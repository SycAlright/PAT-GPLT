/**
 * PAT-GPLT L1-022
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
int main()
{
	int J=0, O=0; //奇偶个数
	int N;
	scanf("%d", &N);
	int i, m;
	for(i=0; i<N; i++)
	{
		scanf("%d", &m);
		if(m%2==0) //偶数
		{
			O++;
		}else{
			J++;
		}
	}
	printf("%d %d", J, O); //奇偶输出 
	return 0;
}