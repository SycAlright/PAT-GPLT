/**
 * PAT-GPLT L1-040
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
int main()
{
	int r;
	scanf("%d", &r);
	int i;
	char x[10];
	float high[10];
	for(i=0; i<r; i++)
	{
		scanf("%s %f", &x[i], &high[i]);
	}
	float h;
	for(i=0; i<r; i++)
	{
		h=0;
		if(x[i]=='F') //女性 
		{
			h=high[i]*1.09;
		}else{
			h=high[i]/1.09;
		}
		printf("%.2f", h); //保留后2位输出 
		if(i!=r-1) //尾行判断 
		{
			printf("\n");
		} 
	}
	return 0;
}