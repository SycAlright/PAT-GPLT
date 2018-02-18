/**
 * PAT-GPLT L1-009
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
int main()
{
    int N;
    long long int gys(); 
    long long int Min; //最小公倍数
    long long int a, b, c, d;
    int i = 1;
    scanf("%d", &N);
    scanf("%lld/%lld", &a, &b); //第一个分数 
    long long int t=gys(a,b); //最大公约数 
    if(a)
    {
        a/=t;
        b/=t;
    }
    while(i < N) //从第二个开始循环 
    {
        scanf("%lld/%lld", &c, &d);
        Min = b/gys(b, d)*d; //最大公约数换算两个分母的最小公倍数
        a = (a*Min/b)+(c*Min/d); //通分后分子的和
        b = Min; //最小公倍数进入下次循环换算 
        t=gys(a,b);
        if(t!=0) //从扩大最小公倍数之后的形式变换回来
        {
            a=a/t;
            b=b/t;
        }
        i++;
    }
    if(a && a/b == 0) //整数部分为0且a不为0
        printf("%lld/%lld\n", a%b, b);
    else if(a%b == 0) //小数部分为0
        printf("%lld\n", a/b);
    else
        printf("%lld %lld/%lld\n", a/b, a%b, b);
    return 0;
}

long long int gys(long long int a, long long int b) //最大公约数
{
    if(a==0)
        return 0;
    else
        return (b == 0) ? a : gys(b, a%b);
}