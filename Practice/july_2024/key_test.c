#include <stdio.h>
int main()
{
  char input;
  printf("Enter a key to test :");
  scanf("%c", &input);
  if (input > 'a' && input < 'z')
  {
    printf("Lower case\n");
  }
  else if (input > 'A' && input < 'Z')
  {
    printf("Upper case\n");
  }
  else if (input > '0' && input <= '9')
  {
    printf("Numeric\n");
  }
  else
  {
    printf("Special key\n");
  }

  return 0;
}