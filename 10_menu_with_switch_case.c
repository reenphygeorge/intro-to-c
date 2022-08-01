#include<stdio.h>
    
int main()
{
      printf("Menu");
      printf("\n1. Option-1");
      printf("\n2. Option-2");
      printf("\n3. Option-3");
      printf("\n4. Option-4");
      printf("\nEnter your choice: ");
      int choice;
      scanf("%d", &choice);
      switch(choice)
      {
          case 1:
            printf("Option 1 is selected");
            break;
          case 2:
            printf("Option 2 is selected");
            break;
          case 3:
            printf("Option 3 is selected");
            break;
          case 4:
            printf("Option 4 is selected");
            break;
          default:
            printf("\nInvalid Option");
      }
      return 0;
}
