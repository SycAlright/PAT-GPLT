/**
 * PAT-GPLT L1-020
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
int main()
{
	
	int ID[100010]= {0};//初始化ID数组，从0到99999
	int N; //朋友圈个数 
	scanf("%d", &N); 
	int i, j;
	int K; //朋友圈人数
	int uID; //用户ID 
	for(i=1; i<=N; i++) //输入并处理朋友圈
	{
		scanf("%d", &K);
		for(j=1; j<=K; j++)
		{
			scanf("%d", &uID);
			if(K!=1) //避免只有一个人的朋友圈添加
				ID[uID]+=K; //uID为下标，数组记录uID朋友圈人数 
		}
	}
	int M; //排查个数
	scanf("%d", &M);
	int G=0; //空格数 
	for(i=1; i<=M; i++)
	{
		scanf("%d", &uID);
		if(ID[uID]==0) //判断是否为没有开朋友圈或自恋狂
		{
			if(G!=0)
				printf(" "); //空格间隔 
			printf("%05d", uID); //输出uID，0补齐5位 
			ID[uID]=-1; //避免多次被检测
			G++; //空格数+1 
		}
	}
	if(G==0) //没有自恋或没开圈的情况
		printf("No one is handsome");
	return 0;
}