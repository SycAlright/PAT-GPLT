/**
 * PAT-GPLT L1-004
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include<stdio.h>
int main()
{
	int f, c;
	scanf("%d", &f);
	c = 5*(f-32)/9;
	printf("Celsius = %d", c);
	return 0;
}