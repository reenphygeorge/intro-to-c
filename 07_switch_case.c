#include<stdio.h>

int main()
{
      // checking integers //
      int i=25;
      switch(i)
      {
          case 1:
              printf("Value is 1");
              break;
          case 2:
              printf("Value is 2");
              break;
          case 25:
              printf("Value is 25");
              break;
          default:
              printf("Default statement");
      }
      
      // checking characters //
      char ch = 'y';
      switch(ch)
      {
          case 'a':
              printf("Value is a");
              break;
          case 'b':
              printf("Value is b");
              break;
          case 'c':
              printf("Value is c");
              break;
          default:
              printf("Default statement");
      }
      
      // switch-case vs if-else //
      // -> Switch case can be used only to check whether the value is equal to certain case values.
      // -> If else can be used to check all relational operators like <, <=, >, >= ==, !=
      
      return 0;
}
