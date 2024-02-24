#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include<sys/types.h>


int main(int argc,char *argv[])
{
    int totalnum=argc-1;
    char oddeven[totalnum];

    for (int i=0;i<totalnum;i++)
    {
        oddeven[i]=atoi(argv[i+1]);
    }

    for (int i=0;i<totalnum;i++){
        if (oddeven[i]%2==0) {
            printf("%d is even\n",oddeven[i]);
        }
        else{
            printf("%d is odd\n",oddeven[i]);
        }
        
    }

    return 0;
}

