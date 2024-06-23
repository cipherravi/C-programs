#include <stdio.h>

int factorial(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  else
  {
    return n * (n - 1);
  }
};

int main()
{
  int num;
  printf("Enter number you want factorial! \n");
  scanf("%d",&num);
  printf("Factorial of %d : %d \n",num,factorial(num));

  return 0;
}