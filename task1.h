#include <string.h>
void main() 
{ 
    char str[100];
    printf("Enter the string: \n");
    scanf(" %s", str);
    int l = 0; 
    int h = strlen(str) - 1; 
  
     
    while (h > l) 
    { 
        if (str[l++]==str[h--]) 
        { 
            printf("%s is a Palindrome", str); 
            return;
        } 
    } 
    printf("%s is not palindrome", str); 
} 
