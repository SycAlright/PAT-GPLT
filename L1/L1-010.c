/**
 * PAT-GPLT L1-010
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(b > c)
	{
		b=b+c;
		c=b-c; 
		b=b-c;
	}
	if(a > b)
	{
		a=a+b;
		b=a-b; 
		a=a-b;
	}
	if(b > c)
	{
		b=b+c;
		c=b-c; 
		b=b-c;
	}
	printf("%d->%d->%d", a, b, c);
	return 0;
}