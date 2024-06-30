#include <stdio.h>
int main()
{
  // int a = 1;
  // int *ptra = &a;
  // printf("%d\n", ptra);
  // printf("%d\n", ptra + 1);
  // printf("size of a %lu\n", sizeof(a));

  int arr[] = {1, 2, 3, 4, 5, 66, 67};
  // arr++; // XX  Array is a constant
  int *arrptr = arr;
  // arrptr++; //OK can do with pointer array
  //  address
  printf("%p\n", &arr[0]);
  printf("%p\n", arr + 2);
  printf("%p\n", &arr[2]);
  // value
  printf("%d\n", *(&arr[0]));
  printf("%d\n", arr[0]);
  printf("%d\n", *(arr + 2));
  printf("%d\n", *(&arr[2]));
  return 0;
}