#include <stdio.h>
int main()
{
  int n, a = 0, b = 1, next, sum = 0;
  printf("Enter a value to get fibonnacci series :\n");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    if (i == 0)
    {
      next = a;
    }
    else if (i == 1)
    {
      next = b;
    }
    else
    {
      next = a + b;
      a = b;
      b = next;
    }
    sum += next;
  }

  printf("Fibbonacci series of %d is %d\n", n, sum);

  return 0;
}
