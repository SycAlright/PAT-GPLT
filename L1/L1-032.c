/**
 * PAT-GPLT L1-032
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n;
	char x;
	int i, j=0;
	char arr[40000]={' '};
	char arr1[40000]={' '};
	scanf("%d ", &n);
	scanf(" %c ", &x);
	gets(arr);
	if(strlen(arr)<n)
	{
		for(i = 0; i<n-strlen(arr); i++)
		{
			arr1[i]=x;
		}
		for(i=n-strlen(arr); i<n; i++)
		{
			arr1[i]=arr[j];
			j++;
		}
		printf("%s\n", arr1);
	}
	else
	{
		j=0;
		for(i=strlen(arr)-n; i<strlen(arr); i++)
		{
			arr1[j]=arr[i];
			j++;
		}
		printf("%s\n", arr1);
	}
	return 0;
}