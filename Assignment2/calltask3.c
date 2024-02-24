#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>


int main(){

    pid_t a,b,c;
    int count=1; 
    a=fork();
    if (a==0)
    { 
        if (getpid()%2!=0){
            fork();
            count++;
        }
    } 
    else 
    {
        count++;
        b=fork();
        if (b==0){
    
            if (getpid()%2!=0){
                fork();
                count++;
            }
            
        } 
        else{
            count++;
            c=fork();
            
            if (c==0)
            {

                if (getpid()%2!=0)
                {
                    fork();
                    count++;
                }
            } 
            else
            {
                count++;
                printf("Total number of processes created: %d\n",count);
            }
            
        }
    }
    
    
    return 0;
}

