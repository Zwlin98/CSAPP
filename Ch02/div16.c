#include <stdio.h>

int div16(int x)
{
    int bias = (x>>31) & 0xf;
    //在这里,如果x是正数,右移产生的是全0序列,那么进行掩码计算是就是0
    //如果x是负数,右移产生的是全1序列,那么进行掩码计算的结果就是15
    return (x+bias) >> 4;
}


int main(int argc, char const *argv[])
{
    int ans = div16(100);
    printf("%d\n",ans);
    return 0;
}
