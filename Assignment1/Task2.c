#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char string[150];


    FILE *line=fopen("input.txt","r");
    FILE *output=fopen("output.txt","w");



    fgets(string,150,line);

    int count=0;
    for (int i=0;i<strlen(string);i++){
        if (string[i]==' ') {
                count=count+1;
                if (count==1){
                    fprintf(output,"%s"," ");
                }
        }
        else{
            fprintf(output,"%c",string[i]);
            count=0;
        }
   }
    return 0;
}






