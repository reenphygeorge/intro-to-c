#include<stdio.h>
    
int main()
{
      int a = 6;
      int b = 5;

      int sum = a + b;
      printf("%d\n", sum);
  
      int diff = a - b;
      printf("%d\n", diff);
  
      int pdt = a * b;
      printf("%d\n", pdt);
  
      // Reminder of a divide b //
      int mod = a % b;
      printf("%d\n", mod);    
      
      // Division & Type Casting a from integer to float //
      float div = (float)a / b;
      printf("%f\n", div);
      
      return 0;
}
