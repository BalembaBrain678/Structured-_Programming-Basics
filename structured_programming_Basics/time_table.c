#include <stdio.h>
int main()
{
    int n;
    printf("enter an int: ");
    scanf("%d", &n);
    for(int i=1;i<=12; ++i)
    {
        Printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;

}

