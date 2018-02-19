/**
 * PAT-GPLT L1-027
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
int main()
{
	char tel[15]; //11位电话
	gets(tel);
	int i;
	int num[10]= {0}; //数字0~9
	for(i=0; tel[i]!='\0'; i++)
	{
		num[tel[i]-48]=1; //出现的数字标记1
	}
	char temp[10];
	int sum=0, t=0;	
	for(i=10; i>=0; i--) //排序数组 
	{
		if(num[i]==1)
		{
			temp[i]=sum;
			t++; 
			sum++;
		}
	}
	printf("int[] arr = new int[]{");
	for(i=10; i>=0; i--) //arr排序输出
	{
		if(num[i]==1)
		{
			printf("%d", i);
			if(t!=1)
			{
				printf(",");
			}
			t--;
		}		
	}
	printf("};\n"); //删除多余逗号
	printf("int[] index = new int[]{");
	int number;
	for(i=0; tel[i]!='\0'; i++) //index排序输出
	{
		number=tel[i]-48;
		printf("%d", temp[number]);
		if(tel[i+1]!='\0') //逗号输出 
		{
			printf(",");
		}
	}
	printf("};"); //删除多余逗号
	return 0;
}