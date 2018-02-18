/**
 * PAT-GPLT L1-037
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <math.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d/", a);
    if (b>=0)
        printf("%d=", b);
    else
        printf("(%d)=", b);
    if (b==0)
        printf("Error");
    else
        printf("%.2f", (a*1.0)/b);
    return 0;
}