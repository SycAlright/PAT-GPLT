/**
 * PAT-GPLT L1-041
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
int main()
{
	char a[10]; //不超过1000的整数 
	int k=1; //从1位起 
	while(~scanf("%s", a)) //~scanf对返回值取反 
	{
		if(a[0]=='2' && a[1]=='5' && a[2]=='0') //寻找250并结束循环 
		{
			printf("%d", k);
			break;
		}
		k++; 
	}
	return 0;
}