#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


void *funcThread(void *arg){
    int threadnum= *(int*)arg;

    printf("thread-%d running\n",threadnum);
    pthread_exit(NULL);

}


int main(){
	pthread_t threads[5];
	for (int i=0;i<5;i++){
          int threadnum=i+1;
          pthread_create(&threads[i],NULL,funcThread,&threadnum);
          pthread_join(threads[i],NULL);
          printf("thread-%d closed\n",threadnum);
          sleep(1);
	}
	return 0;
}
