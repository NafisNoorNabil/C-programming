#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>


int main(int argc, char *argv[]){
    int totalnum=argc-1;
    int arr[totalnum];
    
    for (int i=0;i<totalnum;i++)
    {
        arr[i] = atoi(argv[i+1]);
    }

    for (int i=0;i<totalnum;i++)
    {
        for (int j=i+1;j<totalnum;j++){
            if (arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
     
        }
    }

    for (int i=0; i<totalnum;i++){
        printf("%d ",arr[i]);
    }
    
    printf("\n");

    return 0;
}

