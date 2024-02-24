

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	pid_t pid1;
	pid_t pid2;
	pid_t pid3;
	pid_t pid4;
	pid1=fork();
	
	if (pid1==0){  
	        pid2=fork();

                if (pid2==0){
	          printf("3.Grandchild process ID: %d\n",getpid());
	          pid3=fork();
	          if (pid3==0){
	              printf("4.Grandchild process ID: %d\n",getpid());
	              pid4=fork();
	              if (pid4==0){
	                  printf("5.Grandchild process ID: %d\n",getpid());
	              }
	              else{
	                  wait(NULL);
	              }
	          }
	          
	          else{
	              wait(NULL);
	          }
	        }
	        else{
	          printf("2.Child process ID: %d\n",getpid());
	          wait(NULL);
	        }
	}
	else if(pid1>0){
	        printf("1.Parent process ID: %d\n",getpid());
	        
	        wait(NULL);
			
	}
	
	return 0;
}






