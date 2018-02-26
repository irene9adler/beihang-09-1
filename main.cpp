//北航09年第一题
/*立方根的逼近迭代方程是 y(n+1) = y(n)*2/3 + x/(3*y(n)*y(n)),其中y0=x.求给定的x经过n次迭代后立方根的值。*/
#include <stdio.h>
double lifanggen (double x,int n)
{
    double y;
    y = x;
    int i;
    for(i=0;i<n;i++)
    {
        y = y * 2/3 + x/(3*y*y);
    }
    return y;
}
//原来用递归写不对，因为题目的式子理解错了

int main()
{
    double x;
    int n;
    double val;
    while(scanf("%lf %d",&x,&n)!=EOF)
    {
        val = lifanggen(x,n);
        printf("%.6f\n",val);
    }
    return 0;
}
