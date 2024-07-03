#include <stdio.h>
int main()
{
  int num, factorial = 1, result;
  printf("Enter a value to get factorial : ");
  scanf("%d", &num);
  for (int i = 1; i <= num; i++)
  {
    factorial *= i;
  };
  printf("Your factorial is : %d\n", factorial);

  return 0;
}