#include <stdio.h>

int main()
{
  int num;
  printf("Enter 0 to see Triangular star patter or Enter 1 to see Reverse Triangular star pattern\n");
  scanf("%d", &num);
  if (num == 0)
  {
    printf("\n");
    {
      for (int i = 1; i <= 10; i++)
      {
        for (int j = 1; j <= i; j++)
        {
          printf("*");
        }
        printf("\n");
      }
    }
  }
  else if (num == 1)
  {
    printf("\n");
    {
      for (int i = 10; i >= 1; i--)
      {
        for (int j = 1; j <= i; j++)
        {
          printf("*");
        }
        printf("\n");
      }
    }
  }
  else
  {
    printf("Invalid Number\n");
  }

  return 0;
}
