#include<stdio=h>

int main()
{
      int value;
      scanf("%d",&value);

      if(value < 8)
      {
          printf("Value is less than 8");
      }
      else if(value <= 8)
      {
          printf("Value is less than or equal to 8");
      }
      else if(value > 8)
      {
          printf("Value is greater than 8");
      }
      else if(value >= 8)
      {
          printf("Value is greater than or equal to 8");
      }
      else if(value == 8)
      {
          printf("Value is equal to 8");
      }
      else if(value != 8)
      {
          printf("Value is not equal to 8");
      }
      return 0;
}
