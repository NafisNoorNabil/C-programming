#include <stdio.h>
#include <stdlib.h>

int main()
{
    char pass[25];
    printf("Enter Password: ");
    scanf("%s", pass);
    int lower=0,upper=0,digit=0,special=0;
    for (int i=0;i<strlen(pass);i++){
        if (pass[i]>=97 && pass[i]<=122){
            lower=lower+1;
        }
        else if (pass[i]>=97 && pass[i]<=122){
            lower=lower+1;
        }
        else if (pass[i]>=48 && pass[i]<=57){
            digit=digit+1;
        }
        else if (pass[i]>65 && pass[i]<=90){
            upper=upper+1;
        }
        else if (pass[i]==36 || pass[i]==64 || pass[i]==95 || pass[i]==35){
            special=special+1;
        }
    }
    if (lower==0){
        printf("Lowercase character missing\n");
    }
    if (upper==0){
        printf("uppercase character missing\n");
    }
    if (digit==0){
        printf("Digit character missing\n");
    }
    if (special==0){
        printf("Special character missing\n");
    }
    else{
        printf("OK");
    }
    return 0;
}

