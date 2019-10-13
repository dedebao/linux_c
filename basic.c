#include <stdio.h>
int max (int i,int j)
{
    if(i>=j)
        return i;
    else
        return j;
}
int main()
{
    int t=max(3,5);
    printf("the big number is %d\n",t);
}
