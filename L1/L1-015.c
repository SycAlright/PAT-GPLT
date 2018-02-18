/**
 * PAT-GPLT L1-015
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
int main()
{
	int n;
	char c;
	scanf("%d %c", &n, &c);
	int x;
	if(n%2==1)
	{
		x=n/2+1; 
	}else{
		x=n/2; 
	} 
	int i, k;
	for(i=0; i<x; i++)
	{
		for(k=0; k<n; k++)
		{
			printf("%c", c);
		}
		if(i!=x-1)
		{
			printf("\n");
		}
	}	
	return 0;
}