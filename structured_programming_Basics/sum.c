#include <stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter a three digit number; ");
    scanf("%d", &num);
    int lastdigit;
    while(num != 0)
    {
      lastdigit=num % 10;
      sum += lastdigit;
      num /= 10;
    }
    printf("sum of digit = %d\n", sum);
    return 0;
}
