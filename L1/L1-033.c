/**
 * PAT-GPLT L1-033
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <math.h>
int checkYear(int year) //判断年份中不同数的个数
{
	int i, j, n, num[4];	
	for(i=0; i<4; i++)
	{
		if(year/pow(10,4-i-1)) //拆分年份的个数 
		{
			num[i]=year/pow(10,4-i-1); //记录年份各个数 
			year=year%(int)pow(10,4-i-1); //记录完去除 
		}
		else num[i]=0;
	}
	n=4;
	for(i=0; i<4; i++)
	{
		for(j=i+1; j<4; j++)
		{
			if(num[i]==num[j])
			{
				n--; //不同的计数-1 
			}
		}
	}
	switch(n)
	{
		case -2: //全都相同 
			return 1;
		case 1: //1个不同 
			return 2;
		case 2: //2个不同 
			return 2;
		case 3: //3个不同 
			return 3;
		case 4: //4个不同 
			return 4;
	}
}
int main()
{
	int N, year;
	scanf("%d %d", &year, &N);
	int old=0;
	while(checkYear(year)!=N)
	{
		old++; //岁数+1 
		year++; //年份+1 
	}
	printf("%d %04d\n", old, year);
	return 0;
}