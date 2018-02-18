/**
 * PAT-GPLT L1-003
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <string.h>
int main()
{
	char s[1001];
	int a[10]; //0~9十位 
	int len, t, i, j;
	scanf("%s", s);
	len=strlen(s); //字符串长度 
	t=0;
	for(i=0; i<len; i++)
	{
		t=s[i]-48; //0的ASCII为48 
		a[t]++; //数量统计 
	}
	for(j=0; j<10; j++) //限定数字为0~9 
	{
		if(a[j]!=0) //有的个数才输出 
		{
			printf("%d:%d\n", j, a[j]);
		}
	}
}