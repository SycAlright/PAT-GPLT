/**
 * PAT-GPLT L1-024
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
int main()
{
	int day;
	scanf("%d", &day);
	(day+2>7) ? (day-=5) : (day+=2);
	printf("%d", day);
	return 0;
}