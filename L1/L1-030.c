/**
 * PAT-GPLT L1-030
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
int main()
{
	int r;
	scanf("%d", &r);
	if(r<0||r>50)
	{
		return(0);
	}
	int i, j;
	char name[50][10];
	int sex[50], arr[50]={0};
	for(i=0; i<r; i++)
	{
		scanf("%d", &sex[i]);
		scanf("%s", name[i]);
	}
	for(i=0; i<r; i++) //从左遍历
	{
		for(j=r-1; j>=0; j--) //从右遍历
		{
			//找出符合条件的人，没锁定并且性别不同
			if(arr[i] == 0 && arr[j] == 0 && sex[i] != sex[j])
			{
				printf("%s %s\n", name[i], name[j]);
				//加锁 
				arr[i]=1;
				arr[j]=1;
			}
		}
	}
	return 0;
}