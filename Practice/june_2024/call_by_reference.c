#include <stdio.h>
void quiz(int *a, int *b)
{
  *a = *a + *b;
  *b = *a - *b;
  return;
}
int main()
{
  int a = 10, b = 12;
  printf("A is %d and B is %d \n", a, b);
  quiz(&a, &b);
  printf("A is %d and B is %d \n", a, b);
  return 0;
}