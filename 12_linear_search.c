#include<stdio.h>
    
int main()
{
      int n;
      printf("Enter the size of array: ");
      scanf("%d",&n);
      
      // Initialization of array //
      int arr[n];
      printf("Enter the array elements: ");
      
      // Array Input //
      for(int i=0; i<n; i++)
      {
          scanf("%d",&arr[i]);
      }
      
      // Inputing the value to be searched //
      int value;
      printf("Enter the value to be searched: ");
      scanf("%d",&value);
  
      int loc = -1;
      for(int i=0; i<n; i++)
      {
          if(arr[i] == value)
          {
              loc = i;
          }
      }
      
      if(loc != -1)
      {
          printf("Element found at %d",loc);
      }
      else
      {
          printf("Element not found");
      }
  
      return 0;
}
