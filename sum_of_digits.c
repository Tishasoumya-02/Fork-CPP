#include <stdio.h>
 
int sum (int a);
 
int main()
{
    int num, result;
  int t;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d", &num);
    result = sum(num);
    printf(" %d\n",result);
}
    return 0;
}
 
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}
