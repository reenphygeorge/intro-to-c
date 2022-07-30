#include<stdio.h>

int main()
{
    int a = 5, b = 7;
    
    if(a==5 || b==6)
    {
        printf("PRINTING....");
    }
    if(a==5 && b==6)
    {
        printf("PRINTING....");
    }
    
    a = 1;
    if(!a == 0)
    {
        printf("Value is true");
    }  
    return 0;
}
