#include <stdio.h>
#include <limits.h>

int tadd_ok(int x,int y)
{
    int sum = x+y;
    if(x>0&&y>0&&sum<=0)
    {
        return 0;
    }
    if(x<0&&y<0&&sum>=0)
    {
        return 0;
    }
    return 1;
}
int tsub_ok(int x,int y)
{
    return tadd_ok(x,-y);
}
int main()
{
    printf("%d\n",tsub_ok(5,INT_MIN));
    //显然5-INT_MIN发生了溢出,但这里判断并没有发生溢出,判断错误,
    //其他情况均正确,在考虑是应当多注意INT_MIN这一特殊情况
    //因为INT_MIN的逆元为其本身
    return 0;
}