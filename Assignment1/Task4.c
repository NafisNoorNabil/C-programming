#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main()
{

    char mail[80]="sheba.com";
    char newdomain[]="sheba.xyz";
    char olddomain[40]="";
    printf("Enter Mail: ");
    scanf("%s", &mail);
    int count=0;
    bool flag = false;


    for (int i=0;i<strlen(mail);i++){
            if (mail[i]==64){
                flag=true;
                continue;
            }


            if (flag==true){
                strcat(olddomain, &mail[i]);
                break;
            }
    }

    int result= strcmp(&newdomain,&olddomain);
    if (result==0){
        printf("Email address is okay");
    }
    else{
        printf("Email address is outdated");
    }

    return 0;
}

