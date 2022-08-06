
#include <stdio.h>
#include <string.h>

int main() {
    
    // String Length : strlen()
    char str[20];
    gets(str);
    int len = strlen(str);
    printf("%d",len);
    
    // String copy : strcpy()
    char s1[20], s2[20];
    printf("Enter string 1: ");
    gets(s1);
    strcpy(s2,s1);
    printf("String2: %s",s2);
    printf("\nString1: %s",s1);
    
    // String Comparing : strcmp()
    
    // if String1 > String2: +ve value
    // if String1 < String2: -ve value
    // if String1 == String2: 0
    
    char s1[20], s2[20];
    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);
    int val = strcmp(s1,s2);
    if(val == 0)
    {
        printf("Strings are same");
    }
    else
    {
        printf("Strings are different");
    }
    printf("%d",val);
    
    // String Concatenation : strcat()
    
    char s1[20], s2[20];
    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);
    
    strcat(s2,s1);
    printf("%s",s1);

    return 0;
}
