/**
 * PAT-GPLT L1-011
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <string.h>
int main()
{
	char str[10010]; //10^2
	char xtr[10010]; //防止溢出
	gets(str);
	gets(xtr);
	int len=strlen(xtr); //Xtr长度 
	int i, k;
	for(i=0; str[i]!='\0'; i++) //循环Str 
	{
		for(k=0; k<len; k++) //循环Xtr
			if(str[i]==xtr[k]) //符合匹配，跳出 
				break;
		if(k==len) //Xtr循环结束，输出 
			printf("%c", str[i]); 
	}
	return 0;
} 