#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc,char *argv[]){
    pid_t pid;
    
    pid=fork();
    if(pid==0){
        char *args[argc+1];
        args[0]="./sort";
        for(int i=1;i<argc;i++){
            args[i] = argv[i];
        }
        
        args[argc]=NULL;
        execv(args[0],args);
    }
    else if (pid>0)
    {
        wait(NULL);
        char *args[argc+1];
        args[0]="./oddeven";
        
        for (int i=1;i<argc;i++){
            args[i]=argv[i];
        }
        
        args[argc]=NULL;
        execv(args[0],args);
        }
    
    else{
        perror("error in fork");
    }
    

    return 0;
}

