/**
 * PAT-GPLT L1-019
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
int Judge(int A_say, int A_do, int B_say, int B_do) //判断两人的胜负
{
	int sum=A_say+B_say;
	if(sum==A_do && sum == B_do)//同输
		return 0;
	if(sum==A_do) //甲输
		return 1;
	if(sum==B_do) //乙输
		return 2;
	return 0; //同赢
}

int main()
{
	int A_max, B_max; //最大酒量
	scanf("%d %d", &A_max, &B_max);
	int N;
	scanf("%d", &N);
	int i, flag; //胜负状态 
	int A_drink=0, B_drink=0; //当前酒量 
	int A_say, A_do, B_say, B_do; //甲喊/甲划/乙喊/乙划
	for(i=0; i<N; i++) //输入数据
	{
		scanf("%d %d %d %d", &A_say, &A_do, &B_say, &B_do);
		flag=Judge(A_say, A_do, B_say, B_do); //判断胜负 
		if(flag==1) //甲输,甲喝酒
			A_drink++;
		if(flag==2) //乙输,乙喝酒
			B_drink++;
		if(A_drink>A_max) //判断甲是否喝醉
		{
			printf("A\n");
			printf("%d", B_drink); //当前酒量 
			break;
		}
		if(B_drink>B_max) //判断乙是否喝醉
		{
			printf("B\n");
			printf("%d", A_drink); //当前酒量
			break;
		}
	}
	return 0;
}