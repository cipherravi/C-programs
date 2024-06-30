#include <stdio.h>

int fib_recur(int n)
{
  if (n == 0 || n == 1)
  {
    return n;
  }
  else
  {
    return fib_recur(n - 1) + fib_recur(n - 2);
  }
}

int main()
{
  int n, sum = 0;
  printf("Enter the number of terms in the Fibonacci series: \n");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    sum += fib_recur(i);
  }

  printf("Sum of the first %d terms of the Fibonacci series is %d\n", n, sum);
  return 0;
}
