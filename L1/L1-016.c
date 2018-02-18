/**
* PAT-GPLT L1-016
* Author: Syc
* Email: syc@bilibili.de
* Github: https://github.com/SycAlright/PAT-GPLT
* Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[]={7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2}; //权数 
	char b[11]={'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'}; //取模 
	int N;
	scanf("%d", &N);
	char cur, c[20];
	int i, j, k=0, s;
	int charToInt(char c);
	for(i=0; i<N; i++)
	{
		s=0; //加权和 
		scanf("%s", c); //输入18位身份证号 
		for(j=0; j<17; j++) //前17位循环 
		{
			if(c[j]>='0'&&c[j]<='9') //判断是否数字 
			{
				s+=charToInt(c[j])*a[j]; //加权求和
			}
			else
			{
				printf("%s", c);
				if(i<N-1) //尾不换行 
				{
					printf("\n");
				}
				s=-1; //加权和置-1表示错误状态 
				break;
			}
		}
		if(b[s%11]==c[j]&&s!=-1) //权和对11取模验证 
		{
			k++; //验证成功 
		}
		else if(b[s%11]!=c[j]&&s!=-1) //取模验证失败 
		{
			printf("%s",c);
			if(i<N-1) //尾不换行 
			{
				printf("\n");
			}
		}
	}
	if(k==N) //全部通过 
	{
		printf("All passed");
	}
	return 0;
}

int charToInt(char c) //字符数字转整型数字 
{
	return (int)(c-'0'); //字符数字转ACSII值减去0的ACSII
}