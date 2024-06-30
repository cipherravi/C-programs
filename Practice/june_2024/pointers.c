#include <stdio.h>
int main()
{
  int a = 1;
  int *ptra = &a;
  int *a2 = NULL;
  printf("Value of a is %d\n", a);
  printf("Address of a is %p\n", &a);
  printf("Address of ptra is %p\n", &ptra);
  printf("Address of a is %p\n", ptra);
  printf("Value of a is %d\n", *ptra);
  printf("Value of a2 is %p\n", a2);
  printf("Address of a2 is %p\n", &a2);

  return 0;
}
