/**
 * PAT-GPLT L1-017
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a[55];
	scanf("%s",a);
	float Ka=1.0, Kb=1.0; //负数倍率/偶数倍率 
	int i=0;
	if(a[0]=='-') //判断负数 
	{
		Ka=1.5; //负数倍率1.5 
		i=1; //略过负号 
	}
	float S=0; //2的个数 
	for(; a[i]!='\0'; i++) //数组循环 
	{
		if(a[i]=='2') //统计2
		{
			S++; 
		}
	}
	if(a[i-1]%2==0) //偶数判断
	{
		Kb=2.0; //偶数倍率 
	}
	if(Ka==1.5)
	{
		i-=1; //不计算符号位 
	} 
	float result;
	result = 1.0*(S/i)*Ka*Kb*100; //(2个数/总数)*负数倍率*偶数倍率*100%
	printf("%.2f%%", result); //保留小数点后两位，四舍五入
	return 0;
}