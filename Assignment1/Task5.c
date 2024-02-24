
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[50];
    printf("Enter String: ");
    scanf("%s", &string);

    palindrome(string);
    return 0;
}


void palindrome(char *string){
    for (int i; i<(strlen(string)/2);i++){
            if (string[i]!= string[strlen(string)-i-1]){
                printf("Not Palindrome");
                return;
            }
    printf("Palindrome");
    return ;
    }
}
