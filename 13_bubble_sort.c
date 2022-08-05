#include <stdio.h>

int main() {
    
    // Inputing Array Elements // 
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Bubble Sort //
    for(int i=0; i<n-1; i++) // Denotes travel no
    {
        for(int j=0; j<n-i-1; j++) // Used to travel each element
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("Sorted Array is: \n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
