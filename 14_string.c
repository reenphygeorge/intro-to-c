#include <stdio.h>

int main() {
    // Char Array is Strings in C //
    char name[50];
    printf("Enter your name: ");
    // scanf() can't read white spaces. // 
    // It will stop the execution at a white space. So use gets() //
    gets(name);
    printf("Your Name: %s",name);
    return 0;
}
