#include <stdio.h>
int main()
{
  int input;
  char quit = 'n';
  float value;

  do
  {
    printf("Enter a number from the given below option :\n");
    printf("1. Km to miles\n");
    printf("2. inches to foot\n");
    printf("3. cm to inches\n");
    printf("PRESS Q to Quit\n");

    if (scanf("%d", &input) == 1)
    {

      switch (input)
      {
      case 1:
        printf("Enter the value in km: ");
        scanf("%f", &value);
        printf("%.2f km is equal to %.2f miles\n", value, value * 0.621371);
        break;
      case 2:
        printf("Enter the value in inches: ");
        scanf("%f", &value);
        printf("%.2f inches is equal to %.2f feet\n", value, value / 12);
        break;
      case 3:
        printf("Enter the value in centimeters: ");
        scanf("%f", &value);
        printf("%.2f cm is equal to %.2f inches\n", value, value * 0.393701);
        break;
      default:
        printf("Invalid option. Please try again.\n");
        break;
      }
    }
    else
    {
      scanf(" %c", &quit);
      if (quit == 'q' || quit == 'Q')
      {
        break;
      }
      else
      {
        printf("To quit press Q\n");
        quit = 'n';
      }
    }
    while (getchar() != '\n')
      ;

  } while (quit != 'q' && quit != 'Q');

  return 0;
}
