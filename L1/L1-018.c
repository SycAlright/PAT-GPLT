/**
 * PAT-GPLT L1-018
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <string.h>
int main()
{
	int h,m;
	scanf("%d:%d", &h, &m);
	if((h==12&&m>0)||(h>12&&h<24))
	{
		h-=12;
		if(m>0)
			h+=1;
		int i;
		for(i=0; i<h; i++)
			printf("Dang");
		printf("\n");
	}
	else if(h==24)
		h=0;
	else
		printf("Only %02d:%02d.  Too early to Dang.\n", h, m);
	return 0;
}