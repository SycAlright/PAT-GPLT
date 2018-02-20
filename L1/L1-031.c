/**
 * PAT-GPLT L1-031
 * Author: Syc
 * Email: syc@bilibili.de
 * Github: https://github.com/SycAlright/PAT-GPLT
 * Blog: https://www.mfeng.cc/archives/2018/02/01/PAT-GPLT.html
 */

#include <stdio.h>
#include <math.h>
struct student
{
    int sg, tz; //身高,体重 
    double bz; //标准体重 
}stu[22]; //N<=20 

int main()
{
    int num, i;
    double c;
    scanf("%d", &num);
    for(i=0; i<num; i++)
    {
        scanf("%d %d", &stu[i].sg, &stu[i].tz);
        stu[i].bz=0;
    }
    for(i=0; i<num; i++)
    {
        stu[i].bz=(stu[i].sg-100)*0.9; //标准体重 
        c=stu[i].bz-(double)stu[i].tz/2.0; //真实体重-标准体重 
        if(stu[i].bz*0.1>fabs(c))
        {
            printf("You are wan mei!\n");
        }
        if(c>0&&stu[i].bz*0.1<=fabs(c))
        {
            printf("You are tai shou le!\n");
        }
        if(c<0&&stu[i].bz*0.1<=fabs(c))
        {
            printf("You are tai pang le!\n");
        }
    }
    return 0;
}