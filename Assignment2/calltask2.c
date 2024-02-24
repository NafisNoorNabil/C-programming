

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	pid_t pid1;
	pid_t pid2;
	pid1=fork();
	if (pid1==0){  
	        pid2=fork();

                if (pid2==0){
	          printf("I am grandchild\n");
	        }
	        else{
	          wait(NULL);
                  printf("I am child\n");
	        }
	}
	else if (pid1>0){
	        wait(NULL);
	        printf("I am parent\n");
			
	}
	
	return 0;
}
