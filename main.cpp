//����09���һ��
/*�������ıƽ����������� y(n+1) = y(n)*2/3 + x/(3*y(n)*y(n)),����y0=x.�������x����n�ε�������������ֵ��*/
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
//ԭ���õݹ�д���ԣ���Ϊ��Ŀ��ʽ��������

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
