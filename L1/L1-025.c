/**
 * PAT-GPLT L1-025
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <stdlib.h>
int check(char p[]) //检测是否数字 
{
	int i=1;
	if(!(p[0] >= '0' && p[0] <='9' || p[0] == '+'))
		return 0;
	while(p[i] != 0)
	{
		if(!(p[i]>='0' && p[i] <= '9'))
			return 0;
		i++;
	}
	return 1;
}

int main()
{
	char a[6], b[6]; //区间[1,1000] 
	
	int A,B;
	int i;
	for(i=0; i<5; i++)
	{
		a[i] = getchar(); //获取A
		if(a[i]==' ') //遇到第一个空格 
		{
			break; //跳出 
		}
	}
	a[i] = 0; //清除空格 
	for(i=0; i<5; i++)
	{
		b[i] = getchar(); //获取B 
		if(b[i] == '\n') //遇到回车 
		{
			break; //跳出 
		}
	}
	b[i] = 0; //清除回车
	int flagA, flagB; //状态 
	flagA = check(a); //检测字符 
	flagB = check(b); 
	if(flagA)
	{
		A = atoi(a); //[func]字符串转整型数字
		flagA = A >= 1 && A <= 1000;
	}
	if(flagB)
	{
		B = atoi(b); 
		flagB = B >= 1 && B <= 1000;
	}
	if(flagA && flagB)
	{
		printf("%d + %d = %d",A,B,A+B);
	}
	if(flagA == 1 && flagB == 0)
	{
		printf("%d + ? = ?",A);
	}
	if(flagA == 0 && flagB == 1)
	{
		printf("? + %d = ?",B);
	}
	if(flagA == 0 && flagB ==0)
	{
		printf("? + ? = ?");
	}
	return 0;
}