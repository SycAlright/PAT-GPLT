/**
 * PAT-GPLT L1-012
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
	printf("2^%d = %d", n, (int)pow(2, n));
	return 0;
}