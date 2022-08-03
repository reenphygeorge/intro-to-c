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
  
      // Printing Array //
      for(int i=0; i<n; i++)
      {
          printf("%d",arr[i]);
      }
  
      return 0;
}
