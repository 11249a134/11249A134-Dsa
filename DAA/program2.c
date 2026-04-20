#include <stdio.h>
int main()
{
    int n;
    int a=0,b=1,c;
    printf(" enther the number of terms(n): ");
    if(scanf("%d",&n)!=1|| n<=0)
    {
    printf("it is invalid plase enter a valid integer");
    return 0;
}

printf("Fibonacci series:");
if (n >= 1)
  printf("%d",a);
if (n >= 2)
  printf("%d",b);
 for(int i = 3;i <= n; i++)
{
    c=a + b;
    printf("%d ",c);
    a = b;
    b = c;
}
if (n == 1)
     printf("\n fibonacci term %d = %d\n", n, a);
else
     printf("\nfibonacci term %d = %d \n", n, b);
return 0;
}
