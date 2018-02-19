/**
 * PAT-GPLT L1-029
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <math.h>
int main()
{
	int h;
	scanf("%d", &h);
	float w;
	w=(h-100)*(0.9);
	printf("%.1f", w*2);
}