/**
 * PAT-GPLT L1-035
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <string.h>
int main()
{
	char A[15]; // A
	char B[15]; // B
	char c[15]; // 临时 
	int k=0;
	while(1)
	{
		scanf("%s", c);
		if(c[0]=='.')
			break;
		k++;
		if(k==2)
			memcpy(A, c, sizeof(A));
		if(k==14)
			memcpy(B, c, sizeof(B));
		//void *memcpy(void *str1, const void *str2, size_t n)
	}
	if(k<2)
		printf("Momo... No one is for you ...");
	if(k>=2&&k<14)
		printf("%s is the only one for you...", A);
	if(k>=14)
		printf("%s and %s are inviting you to dinner...", A, B);
	return 0;
}