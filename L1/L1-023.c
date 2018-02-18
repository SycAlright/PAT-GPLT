/**
 * PAT-GPLT L1-023
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <string.h>
int main()
{
	char a[10000];
	scanf("%s", &a);
	int b[4];
	int i, size, str, sum=0;
	size=strlen(a);
	for(i=0; i<size; i++)
	{
		str=toupper(a[i]);
		switch(str)
		{
			case 'G':
				b[0]++;
				break;
			case 'P':
				b[1]++;
				break;
			case 'L':
				b[2]++;
				break;
			case 'T':
				b[3]++;
				break;
		}
		if(str=='G'||str=='P'||str=='L'||str=='T')
			sum++;
	}
	char c[4]={'G', 'P', 'L', 'T'};
	while(sum>0)
	{
		for(i=0; i<4; i++)
		{
			if(b[i]!=0)
			{
				printf("%c", c[i]);
				b[i]--;
				sum--;
			}
		}
	}
	return 0;
}